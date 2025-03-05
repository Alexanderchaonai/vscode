#include<stdio.h>

int main()
{
    long long N;
    scanf("%lld",&N);
    int sum=(N);
    
/*   if(N%2!=0)
    {
        int count=0;
        int sum1=0;
        int sum2=0;
        while(N!=0)
        {
            int temp=N%10;
            if(temp==0)
            {
                N=N/10;
                continue;
            }
            count++;
            if(count%2!=0)
            {
                sum1=sum1*10+temp;
            }
            else
            {
                sum2=sum2*10+temp;
            }
        }
        printf("%d %d",sum2,sum1);
    }
    if(N%2==0)
    {
        int count=0;
        int sum1=0;
        int sum2=0;
        while(N!=0)
        {
            int temp=N%10;
            if(temp==0)
            {
                N=N/10;
                continue;
            }
            count++;
            if(count%2==0)
            {
                sum1=sum1*10+temp;
            }
            else
            {
                sum2=sum2*10+temp;
            }
        }
        printf("%d %d",sum1,sum2);
    }*/
}


long long sum(long long N)
{
        int count=0;
        int sum1=0;
        int sum2=0;
        while(N!=0)
        {
            int temp=N%10;
            if(temp==0)
            {
                N=N/10;
                continue;
            }
            count++;
            if(count%2==0)
            {
                sum1=sum1*10+temp;
            }
            else
            {
                sum2=sum2*10+temp;
            }
        }
        return sum1,sum2;
}