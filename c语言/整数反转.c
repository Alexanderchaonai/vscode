//将一个整数x进行反转
#include <stdio.h>

int main()
{
    int number=635;
    int reverse=0;
    //从个位开始，依次获取number的每一位的数字，再拼接到reverse中，如果不熟或者忘了可以以123为例子理解
    while(number!=0)
    {
        //获取number右边的第一个数字
        int temp=number%10;
        //将number除以十，好方便获取下一个数字，也就是令原本在倒数第二个的数字变到最后一个，这一步
        //是为了为下一次循环做准备，与这次循环无关了
        number/=10;
        //把刚刚获取到的数字拼接到reverse变量中去
        reverse=reverse*10+temp;

    }
    printf("%d\n",reverse);
}