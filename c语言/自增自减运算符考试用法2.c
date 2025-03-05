#include<stdio.h>

int main()
{ 
    int a=10;
    int b=a++;
    //此时a=11
    int c=++a;
    printf("%d\n",a);//12
    printf("%d\n",b);//10
    printf("%d\n",c);//12

}