//分别用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
#include<iostream>
using namespace std;
class Calculator
{
public:
    int getRes(string oper)
    {
        if(oper=="+")
            return m_Num1+m_Num2;
        else if(oper=="-")
            return m_Num1-m_Num2;
        else if(oper=="*")
            return m_Num1*m_Num2;
        return m_Num1/m_Num2;
    }
public:
    int m_Num1;
    int m_Num2;
};

void test01()
{
    Calculator c;
    c.m_Num1=10;
    c.m_Num2=10;
    cout<<c.getRes("+")<<endl;
}
//-------------------------------------------------------------------------------------------------
//利用多态实现计算器

//实现计算器的基类（抽象类）
class AbstractCalc
{
public:

    virtual int getRes()
    {
        return 0;
    }
    int m_num1;
    int m_num2;
};

//设计一个加法计算器类
class AddCalc :public AbstractCalc
{
public:
    int getRes()
    {
        return m_num1+m_num2;
    }
};
class SubCalc :public AbstractCalc
{
public:
    int getRes()
    {
        return m_num1-m_num2;
    }
};

class MulCalc :public AbstractCalc
{
public:
    int getRes()
    {
        return m_num1*m_num2;
    }
};
void test02()
{
    //多态使用条件，父类的指针或者引用指向子类对象
    //加法
    AbstractCalc *a=new AddCalc;
    a->m_num1=10;
    a->m_num2=20;
    cout<<a->m_num1+a->m_num2<<endl;
    //堆区数据手动销毁
        delete a;
    //减法
    a=new SubCalc;
    a->m_num1=10;
    a->m_num2=20;
    cout<<a->m_num1-a->m_num2<<endl;
    delete a;
}
int main()
{
    test01();//普通
    test02();//多态
    /*优点：
    1.代码组织结构清晰
    2.可读性强
    3.对于前期和后期扩展方便以及可维护性高
    */
}



//都是通过父类这个接口，在dowork函数中使用这个接口，去迎合用户需求从而调用子类里面的各种函数，有了一个接口，就不用因为用户需求多样化而频繁改变代码，这就是多态带来的好处
//纯虚函数就是在父类中不做任何实现，而在子类中做具体的实现