#include<stdio.h>

int main()
{
    int a,n;
    scanf("%d %d",&a,&n);
    int pow=1;
    for(int i=0;i<n;i++)
    {
        pow=pow*a;
    }
printf("%d\n",pow);
}