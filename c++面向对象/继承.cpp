#include<iostream>
using namespace std;

class BasePage
{
public:
    void header()
    {
        cout<<"首页，公开课，登录，注册"<<endl;
    }
    void footer()
    {
        cout<<"帮助中心，交流合作，站内地图"<<endl;
    }
    void left()
    {
        cout<<"Java,Python,C++"<<endl;
    }
};

class Java:public BasePage
{
public:
    void content()
    {
        cout<<"Java课程视频"<<endl;
    }
};
class Python:public BasePage
{
public:
    void content()
    {
        cout<<"Python课程视频"<<endl;
    }
};
class Cpp:public BasePage
{
public:
    void content()
    {
        cout<<"C++课程视频"<<endl;
    }
};
void test01()
{
    Java ja;
    ja.header();
    Python py;
    py.footer();
    Cpp c;
    c.left();
}

int main()
{
    test01();
}