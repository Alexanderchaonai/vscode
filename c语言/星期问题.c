#include<stdio.h>

int main()
{
    int D,N;
    scanf("%d %d",&D,&N);
    int res=(D+N-1)%7+1;//这里D+N-1的目的是比如D=5，N=4，过了四天，说明经过了星期六七一二而没有星期零，因此需要多减1个
    printf("%d",res);
    
}