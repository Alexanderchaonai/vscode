//C语言中获取随机数的步骤
//1.使用srand设置种子，也就是初始值
//2.使用rand获取随机数
//随机数头文件格式<stdlib.h>   standard library 标准库
#include<stdio.h>
#include<stdlib.h>
int main()
{
    srand(1);
    for(int i=1;i<=10;i++)
    {
            int sum=rand();
        printf("%d\n",sum);
    }

}