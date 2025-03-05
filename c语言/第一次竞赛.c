#include<stdio.h>

int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    int count=0;
    for(int i=0;i<=n;i++)
    {
        int c=a-i;
        if(c<0)
        {
            c=-c;
        }
        if(c==b&&n>=a+b)
        {
            printf("%d ",i);
            count++;
        }
    }
    if(count==0)
    {
        printf("No solution");
    }

    
}