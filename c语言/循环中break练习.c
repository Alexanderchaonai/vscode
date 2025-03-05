//在1到100之间，找出第一个既能被3，又能被5整除的数字
#include<stdio.h>
int main()
{
    int a;
    for(a=1;a<=100;a++)
    {
        if(a%3==0&&a%5==0)
        {
            printf("%d\n",a);
            break;
        }
    }
}
//小结：break不能单独书写，只能使用在switch或者循环当中，表示结束，跳出的意思