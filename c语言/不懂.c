#include<stdio.h>

int main()
{
    int n;
    int max=0;
    while(1)
    {
        scanf("%d",&n);
        if(n>max)
        {
            max=n;
        }
        if(getchar()=='\n')
        {
            break;
        }
    }

    printf("%d",max);
}