#include <stdio.h>

int main()
{//格式：关系表达式?表达式1：表达式2 ;
//练习1：要求获取两个变量中的较大值
int a=10;
int b=20;
int c=a>b?a:b;
printf("%d\n",c);

//练习2：获取三个变量中的最大值
int d=10;
int e=20;
int f=30;
int h=d>e?d:e;
int max=h>f?h:f;
printf("%d\n",max);

}