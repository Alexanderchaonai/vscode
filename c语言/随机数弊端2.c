#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//如何在任意范围内获取一个随机数，比如1-100，7-23
//解决办法：1.把这个范围变成包头不包尾，包左不包右，eg：把7-23先改为7-24
//         2.拿着尾巴-开头    24-7=17
//         3.修改代码
int main()
{
    srand(time(NULL));
    for (int i=1;i<=10;i++)
    {
        int num=rand()%17+7;//0-16+7       7-23
        printf("%d\n",num);
    }
}