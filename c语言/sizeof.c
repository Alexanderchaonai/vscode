#include<stdio.h>

int main()
{
    //short 短整型 2个字节
    short a=10;
    printf("%d\n",a);
    
    //int 整型 4个字节
    int b=100;
    printf("%d\n,b");

//long 长整型 4个字节
    long c=1000L;
    printf("%ld\n,c");

//long long 超长整型 8个字节
    long long d=10000LL;
    printf("%lld\n",d);
//利用sizeof测量每一种数据类型占用多少字节
//sizeof（变量名/数据类型）
    printf("%zu\n",sizeof(a));

    printf("%zu\n",sizeof(b));

    printf("%zu\n",sizeof(long));
    
    printf("%zu\n",sizeof(long long));



//有符号整数 无符号整数的定义情况
//signed有符号整数 正数 负数(一般可以省略)
//unsigned无符号整数 正数

signed int e=-10;
printf("%d\n",e);

//eg：要求定义一个变量表示序号
unsigned int f=999;
printf("%u\n",f);
    return 0;
    }
