//判断一个数是否为回文序列，回文数是指一个数正着读和倒着读都是一样的数字，比如121
#include<stdio.h>

int main()
{
    int a=1216121;
    int number=a;
    int back=0;
    while(number!=0)
    {
        int temp=number%10;
        number/=10;
        back=temp+back*10;
    }
    if(a==back)
        printf("yes");
    else    
        printf("no");
}