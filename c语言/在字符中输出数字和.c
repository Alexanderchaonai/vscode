#include<stdio.h>

int main()
{
    int sum=0;
    char ch;
    while(ch=getchar()!='#')
    {
        if(ch>='0'&&ch<='9')
        {
            sum=sum+ch-'0';
        }
    }
    printf("%d",sum);
    return 0;
}