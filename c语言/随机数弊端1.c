#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//种子不变，随机数结果也不会改变
//解决方法：使种子的值也不确定，用一个变化的数据去充当种子，也就是时间
int main()
{
    srand(time(NULL));
    for(int i=1;i<=10;i++)
    {
        int num=rand();
        printf("%d\n",num);
    }
}