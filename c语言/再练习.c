//需求：键盘录入两个数字，表示一个范围
//统计这个范围中，既能被6整除，又能被8整除的数字有多少个
#include<stdio.h>

int main()
{
    int a;
    int b;
    printf("请输入两个数字\n");
    scanf("%d %d",&a,&b);
    int count=0;
    int min=a<b?a:b;
    int max=a>b?a:b;

    for(int i=min;i<=max;i++)
    {
        if(i%6==0&&i%8==0)
        {
          count++;
        }
    }
    printf("有%d个\n",count);
}