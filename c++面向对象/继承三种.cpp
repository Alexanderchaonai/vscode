#include<iostream>
using namespace std;
class Father
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son1:public Father
{
public:
    void func()
    {
        m_A=10;//公共仍是公共
        m_B=10;//保护仍是保护
        //m_C=10;私有仍是私有，子类不可访问
    }
};
void test01()
{
    Son1 s1;
    s1.m_A=100;
    //s1.m_B=100;保护权限类外不可访问
}
class Son2:protected Father
{
    void func()
    {
        m_A=20;//公共变保护
        m_B=20;//公共变保护
        //m_C=20;私有仍然访问不到
    }
};
void test02()
{
    Son2 s2;
    //s2.m_A=100;保护权限类外无法访问
}
class Son3:private Father
{
    void func()
    {
        m_A=10;
        m_B=10;
    }
};
void test03()
{
    Son3 s3;
    //s3.m_A=100;私有继承，均不可类外访问
}