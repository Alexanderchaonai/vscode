#include<iostream>
#include<cmath>
using namespace std;

bool iftrue(int num)
{
    int sum=0;
    int temp=num;
        while(num!=0)
        {
            int digit=num%10;
            sum=sum+pow(digit,3);
            num=num/10;
        }
        if(sum==temp)
        {
            return true;
        }
        else
        {
            return false;
        }
}
int main()
{
    int N;
    cin>>N;
    for(int i=3;i<=N;i++)
    {
        int digit=i;
        for(int j=pow(10,digit-1);j<=pow(10,digit)-1;j++)
        {
            if(iftrue(j))
            {
                printf("%d\n",j);
            }
        }
    }
}




