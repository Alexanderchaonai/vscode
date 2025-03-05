#include<iostream>
using namespace std;
class Phone
{

public:
    Phone(string pName)
    {
        cout<<"Phone的构造函数调用"<<endl;
        m_PName=pName;
    }
    ~Phone()
    {
        cout<<"Phone的析构函数调用"<<endl;
    }
    string m_PName;
};
class Person
{

public:
//这里实际上有个隐式构造-->Phone m_Phone=pName;
    Person(string name,string pName ):m_name(name),m_Phone(pName)//这里的作用是给这两个属性赋初值，使用了简便的初始化列表的方法，冒号表示这是在Person作用域下的
    {
        //相当于   m_name=name;m_Phone=pName;
        cout<<"Person的构造函数调用"<<endl;
    }
    string m_name;
    Phone m_Phone;
    ~Person()
    {
        cout<<"Person的析构函数的调用"<<endl;
    }
};
//当其他类对象作为本类成员，构造时先构造类对象，再构造自身，
//而析构顺序相反，析构时先析构自身，再析构对象，有点像栈，先进后出
void test01()
{
    Person p("张三","华为");
    cout<<p.m_name<<" "<<p.m_Phone.m_PName<<endl;
}
int main()
{
    test01();
    return 0;
}
