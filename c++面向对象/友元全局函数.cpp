#include<iostream>
using namespace std;
class Building
{
    //goodGay全局函数是Building类的好朋友，可以访问私有成员
    friend void goodGay(Building &building);
public:
    Building()
    {
        m_sittingRoom="客厅";
        m_bedRoom="卧室";
    }
public:
    string m_sittingRoom;//客厅
private:
    string m_bedRoom;

};

//全局函数
void goodGay(Building &building)
{
    cout<<"好基友的全局函数正在访问："<<building.m_sittingRoom<<endl;

    cout<<"好基友的全局函数正在访问："<<building.m_bedRoom<<endl;
}

void test01()
{
    Building building;
    goodGay(building);//注意，我这里传进的参数就是对象本身，不用对对象取地址，因为上面的用的是引用
}
int main()
{
    test01();
}