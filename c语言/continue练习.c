//你早上买了五个包子，吃到第三个的时候发现有虫子，然后立马扔掉，随后开始吃下一个
#include<stdio.h>

int main()
{
    int a;
    for(a=1;a<=5;a++)
    {
        if(a==3)
        {
            continue;
        }
        printf("在吃第%d个包子\n",a);
    }
}
//continue只能写在循环中，表示跳过本次循环，继续执行下一次循环