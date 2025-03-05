//1打印一个九行九列的矩形
//2改成直角三角形
//3改成99乘法表
#include<stdio.h>
int main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d*%d=%d\t",j,i,i*j);
        }
        printf("\n");
    }
}
//     \t为制表符，可以理解为长度可变的大空格，用于对齐