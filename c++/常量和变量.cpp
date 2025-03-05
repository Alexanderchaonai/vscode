#include<iostream>
using namespace std;

//常量的定义方式
//1.  #define 宏常量               #define 常量名=常量值
//2.  const修饰的变量              #const 数据类型  常量名=常量值


//define的用法
#define Day 7
int main()
{
    int a=10;
    cout<<"a="<<a<<endl;
    cout<<"一周总共有："<<7<<"天"<<endl;


//const修饰的变量
    const int month=12;//变量加了const之后，该变量的值就不可以再修改
    cout<<"一年总共有:"<<month<<"月份"<<endl;
    cout<<"一年总共有"<<month<<"月份"<<endl;
}   