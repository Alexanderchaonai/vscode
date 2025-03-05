#include<stdio.h>
int main()
{
    int zuidagongyueshu;
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int c;
    
    if(a>b)
    {
         c=b;
    }
    else
    {
         c=a;
    }
    for(int i=1;i<=c;i++)
    {
        if(a%i==0&&b%i==0)
        {
           zuidagongyueshu=i;
        }
    }
printf("%d",a*b/zuidagongyueshu);

}