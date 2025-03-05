//定义两个变量，要求交换变量中记录的值，注意：交换的代码写在一个新的函数swap中
#include<stdio.h>

void swap(int* p1,int* p2);
int main()
{
    int a=10;
    int b=20;
    printf("%d,%d ",a,b);
    swap(&a,&b);
    printf("%d,%d",a,b);
}

void swap(int* p1,int* p2)//这里p1直接指向a，p2直接指向b，因此下面解引用之后直接就是变量a和变量b对应的值
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
//指针作用1：可以操作其他函数中的    变量
//相当于之前调用函数传递的是变量里的值而不是变量本身，而调用指针之后可以做到直接将变量本身传递过去
//有一个形象的比喻：变量是房间，赋给变量的值是住户，房间门牌号就是指针