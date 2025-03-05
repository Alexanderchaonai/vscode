#include<stdio.h>
int main()
{
    int a=10;
    int b=5;
    int c=a++ + ++a - --b -a--;//10+12-4-12=6,11+11-4-11=7
    printf("%d\n",c);
    return 0;
}