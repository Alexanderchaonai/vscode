#include<stdio.h>

void print_star(int n)
{
    for(int i=0;i<=n;i++)
    {
        printf("*");
    }
}
void print_space(int n)
{
    for(int i=0;i<=n;i++)
    {
        printf(" ");
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    int maxwidth=2*n-1;
    for(int i=1;i<=n;i++)
    {
        print_space((maxwidth-(2*i-1))/2);
        print_star(2*i-1);
        printf("\n");
    }
}