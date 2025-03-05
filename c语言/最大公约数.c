#include<stdio.h>

int min(int m,int n);
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int num=min(m,n);
    for(int i=num;i>=0;i--)
    {
        if(m%i==0&&n%i==0)
        {
            printf("%d\n",i);
            break;
        }

    }   
}

int min(int m,int n)
{
    if(m>n)
    {
        return n;
    }
    else
    {
        return m;
    }
}