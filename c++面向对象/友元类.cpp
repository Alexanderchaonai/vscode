#include<iostream>
using namespace std;
//目的：让一个类可以访问另一个类中的私有成员

class Building
{
    //goodGay这个类是本类的好朋友，可以访问本类中的私有属性
    friend class goodGay;
public:
    Building();
public:
    string m_sittingRoom;
private:
    string m_bedRoom;
};
//可以类外写成员函数
Building::Building()
{
    this->m_sittingRoom="客厅";
    m_bedRoom="卧室";
    //在类的成员函数（包括构造函数）中，如果你直接使用成员变量的名字，编译器会自动把它解析为
    //当前对象的成员变量，也就是说，上面两种写法实际上是等价的
}
//使用 this 指针只是为了明确表明“这是当前对象的成员”，可以提高代码的可读性，尤其是在
//局部变量与成员变量重名的情况下；但是如果没有重名，加不加都不会影响程序的正常运行。
//所以这段代码即使不加 this-> 也是可以正常编译和运行的。

class goodGay
{
public:
    goodGay();//构造函数声明，因为我要在类外创建它
    void visit();//参观函数，访问Building中的所有属性
    Building* building;//创造一个指向Building类的指针，待会通过它访问另外一个类Building，访问使用构造函数，下面的那个就是的
};

goodGay::goodGay()
{
    //创建一个建筑物的对象
    building=new Building;//new相当于在堆区创建了一个对象，并且让building这个指针指向这个对象
}
void goodGay::visit()
{
    cout<<"好基友这个类正在访问"<<building->m_sittingRoom<<endl;

    cout<<"好基友这个类正在访问"<<building->m_bedRoom<<endl;
}
void test01()
{
    goodGay gg;
    gg.visit();
}

int main()
{
    test01();
}