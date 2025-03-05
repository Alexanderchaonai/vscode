#include<iostream>
using namespace std;
class Building;
class goodGay
{
public:
    goodGay();
    void visit();//我们希望visit这个成员函数，可以访问Building中的私有内容
    void visit2();//让这个函数不可以访问Building中的私有内容
    Building* building;
};
class Building
{
    //告诉编译器，goodGay下的visit函数作为本类的好朋友，可以访问私有成员
    friend void goodGay::visit();
public:
    Building();
public:
    string m_sittingRoom;
private:
    string m_bedRoom;
};
//类外实现成员函数
Building::Building()
{
    m_sittingRoom="客厅";
    m_bedRoom="卧室";
}
goodGay::goodGay()
{
    building=new Building;
}
void goodGay::visit()
{
    cout<<"visit函数正在访问公共内容"<<building->m_sittingRoom<<endl;
    cout<<"visit函数正在访问私有内容"<<building->m_bedRoom<<endl;
}
void goodGay::visit2()
{
    cout<<"visit2函数正在访问公共内容"<<building->m_sittingRoom<<endl;
}



void test01()
{
    goodGay gg;
    gg.visit();
    gg.visit2();
}
int main()
{
    test01();
}