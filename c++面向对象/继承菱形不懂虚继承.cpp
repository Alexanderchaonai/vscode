#include<iostream>
using namespace std;
class Animal
{
public:
    int m_Age;
};
class Sheep :virtual public Animal//继承之前加上关键字virtual编程虚继承，Animal变为虚基类，解决菱形继承
{};

class Camel :virtual public Animal
{}; 

class SheepTuo :public Sheep,public Camel
{};

void test01()
{
    SheepTuo st;
    st.Sheep::m_Age=18;
    st.Camel::m_Age=20;
    cout<<st.Sheep::m_Age<<endl;
    cout<<st.Camel::m_Age<<endl;
    cout<<st.m_Age<<endl;//虚继承后，不会出现访问对象不明确的问题
}

int main()
{
    test01();
}