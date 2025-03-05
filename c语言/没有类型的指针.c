//void* p     特点：无法获取数据，无法计算，但是可以接收任意地址
#include <stdio.h>

int main()
{
    int a=10;
    short b=20;
    int* p1=&a;
    short* p2=&b;
    printf("%d\n",*p1);
    printf("%d\n",*p2);
    //不同类型的指针之间，是不能相互赋值的
    //void类型的指针打破了上面这个观念
    //void没有任何类型，好处是可以接受任意类型指针记录的内存地址

    void* p3=p1;
    void* p4=p2;
    //缺点：void类型的指针，无法获取变量里面的数据，也不能进行加减的计算
    printf("%d\n",*(p3+1));
}

void swap(int* p1,int* p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}