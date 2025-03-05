#include<stdio.h>

int main()
{
    for(int j=1;j<=3;j++)
    {
        for(int i=1;i<=5;i++)
    {
        printf("*");
    }
    printf("\n");
    }
    //总结：先确定内循环做了什么事情，然后就好搞了
    //外循环其实就是把里面的代码重复了N次

//课堂练习：打印一个7行8列的矩形

for(int j=1;j<=7;j++)
{
    for(int i=1;i<=8;i++)
    {
        printf("*");
    }
    printf("\n");
}








}