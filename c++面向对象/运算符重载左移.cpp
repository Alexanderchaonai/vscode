#include<iostream>
using namespace std;
//左移运算符重载
class Person
{
    friend ostream& operator<<(ostream &out,Person p);//全局函数作为友元，可以访问私有属性
public:
    Person(int a,int b)
    {
        m_A=a;
        m_B=b;
    }
private:
//利用成员函数重载左移运算符，p.operator<<(cout),使用成员函数的本质是p在调用这个成员函数，cout作为
//参数传递进去，但是这样子p不能在右边，而只能成为左操作数，这是不符合我们的要求的
    int m_A;
    int m_B;
};
//只能利用全局函数重载左移运算符
//cout属于标准的ostream流对象，也就是输出流对象，通过标准输出流这个类，创造了一个cout对象
ostream& operator<<(ostream &out,Person p)//这里一开始不知道要返回什么，就先写void，但是会发现后面
//写cout<<p<<endl时会报错，就是因为利用全局函数重载完这个左移运算符后，这个重载是全局情况下的
//如果还要继续保持链式结构，就要让每次调用函数之后返回的都是cout这个对象，当你重载operator<<时，如果要保持
//cout的链式调用能力，就需要让重载后的operator<<函数返回一个可以继续进行<<操作的对象，而cout是ostream类的对象
//为了避免不必要的对象复制（提高效率），通常返回ostream的引用，这里也可以写out，因为引用就是起
//别名，名称无所谓，指向的是同一个内存地址
{
    cout<<"m_A="<<p.m_A<<endl<<"m_B="<<p.m_B;
    return out;
}
void test01()
{
    Person p(10,20);//通过构造函数间接访问私有属性
    // p.m_A=10;
    // p.m_B=10;
    cout<<p<<endl;
}
int main()
{
    test01();
}