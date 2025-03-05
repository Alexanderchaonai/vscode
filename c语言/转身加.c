#include<stdio.h>

//定义一个专门用来反转数字的函数
int reverseNumber(int num)
{
    int reverse=0;
    while(num!=0)
    {
        int temp=num%10;
        num=num/10;
        reverse=reverse*10+temp;
    }
    return reverse;
}

int main()
{
    int m,n;
    while(1)
    {
        scanf("%d %d",&m,&n);
        if(m==0&&n==0)
        {
            break;
        }
    int reverseM=reverseNumber(m);
    int reverseN=reverseNumber(n);
    int sum=reverseM+reverseN;
    printf("%d\n",sum);
    }
}

/*做了A+B问题之后，某X同学感觉太简单了，于是他想让你求出两个数反转后相加的值。 

输入格式:
有多组测试数据。每组包括两个数m和n，数据保证int范围，当m和n同时为0时表示输入结束。

输出格式:
输出每组测试数据反转后相加的结果，一个结果一行。*/









