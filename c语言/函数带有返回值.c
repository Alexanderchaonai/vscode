/*小明：基础题93，附加题10
  小芳：基础题87，附加题9  
  函数最终格式：
    返回值类型 函数名（形参...）
    {   
    函数体；
    return 返回值               //表示把函数的最终值交还给调用函数的地方
    }
    调用方式：
    用变量去接受函数的结果
   或者 printf("占位符"，函数的调用)；
*/
#include <stdio.h>

int sum(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int score1=sum(92,10);
    int score2=sum(87,9);
    if(score1>score2)
    {
        printf("小明更高");
    }
    else if(score1<score2)
    {
        printf("小芳更高");
    }
    else
    {
        printf("两人一样高");
    }
    return 0;
}