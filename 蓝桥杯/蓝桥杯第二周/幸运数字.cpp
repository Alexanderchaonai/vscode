#include<iostream>
using namespace std;

bool has(int num,int n)
{
    int sum=0;
    int temp=num;
    while(temp!=0)
    {
        int digit=temp%n;
        sum=sum+digit;
        temp=temp/n;
    }
    if(num%sum==0)
    {
        return true;
    }
    return 0;
}

int main()
{
    int count=0;
    for(int i=1;;i++)
    {
        if(has(i,10)&&has(i,8)&&has(i,16)&&has(i,2))
        {
            count++;
            if(count==2023)
            {
              cout<<i<<endl;
              break;
            }
        }
    }
}