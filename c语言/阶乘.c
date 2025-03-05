#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    long long sum=1;
    int i;
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    printf("%d!=%lld",n,sum);
}