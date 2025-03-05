/*有两个整数，被除数dividend和除数divisor
将两数相除，要求不使用乘法，除法和取余运算。
返回被除数dividend除以除数divisor得到的商和余数
比如说：两个整数11，3
输出结果：   商：3
            余：2
*/
#include<stdio.h>

int main()
{
    int div1=100;
    int div2=11;
    int count=0;
    while(div1>=div2)
    {
        div1=div1-div2;
        count++;
    }
    printf("商：%d\n",count++);
    printf("余：%d\n",div1);
}