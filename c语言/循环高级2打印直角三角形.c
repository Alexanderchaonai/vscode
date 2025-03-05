#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //代码解释：
    //i=1：表示我现在打印第一行的* 内循环：1~5
    //i=2：表示我现在打印第二行的* 内循环：2~5 



    
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}