#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        int shiwan=(i/100000)%10;
        int qian=(i/1000)%10;
        int shi=(i/10)%10;
        int wan=(i/10000)%10;
        int bai=(i/100)%10;
        int ge=i%10;
        if(shiwan%2==1&&qian%2==1&&shi%2==1&&wan%2==0&&bai%2==0&&ge%2==0&&shiwan!=wan&&wan!=qian&&qian!=bai&&bai!=shi&&shi!=ge
        &&(qian*10+bai>12)||(qian*10+bai<1)&&(shi*10+ge>31)||(shi*10+ge<1)&&(wan>shiwan&&wan<qian)||(wan<shiwan&&wan>qian)
        &&(shi>bai&&shi<ge)||(shi<bai&&shi>ge)&&((shiwan*100+wan*10+qian)-(bai*100+shi*10+ge))%23==13)
        {
            printf("%d\n",i);
        }
    }
}