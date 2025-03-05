#include<stdio.h>

int sum(int a,int b,int c)
{
    int sum=a+b+c;
    return sum;
}
int max(int i,int j)
{
    if(i>j)
    {
        return i;
    }
    else
    {
        return j;
    }
}
int main()
{
    int a=sum(10,20,15);
    int b=sum(20,30,17);
    int c=sum(19,17,20);
    int d=sum(23,21,19);
    //初始化最大值和最小值：将第一个数a作为初始的最大值和最小值。
    //比较并更新：使用一系列的if语句来比较其他三个数（b、c、d）与当前的最大值和最小值，并相应地更新它们。
    int max,min;
     max=a;
     min=a;
     if(b>max)
     {
        max=b;
     }
     if(b<max)
     {
        min=b;
     }
     if(c>max)
     {
        max=c;
     }
     if(c<max)
     {
        min=c;
     }
     if(d>max)
     {
        max=d;
     }
     if(d<max)
     {
        min=d;
     }
     printf("这四组数据最大值为%d\n",max);
     printf("这四组数据最小值为%d\n",min);

    
}