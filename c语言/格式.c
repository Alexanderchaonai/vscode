#include<stdio.h>
int main()
{
    int k;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&k);
        if(k%2==0)
        {
            for(int i=1;i<=k;i++)
            {
                if(i%2!=0)
                {
                    printf("%d ",i);
                }
            }
            printf("\n");
            for(int j=1;j<=k;j++)
            {
                if(j%2==0)
                {
                    printf("%d ",j);
                }
            }
        }
        if(k%2!=0)
        {
            for(int i=1;i<=k;i++)
            {
                if(i%2!=1)
                {
                    printf("%d ",i);
                }
            }
            printf("\n");
            for(int j=1;j<=k;j++)
            {
                if(j%2==0)
                {
                    printf("%d ",j);
                }
            }
        }
    }
}