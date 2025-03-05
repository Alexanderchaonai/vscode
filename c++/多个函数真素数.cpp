#include<iostream>
#include<cmath>
using namespace std;

bool Prime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
        return false;
        }
    }
    return true;
}

int back(int num)
{
    int rev=0;
    while(num!=0)
    {
        int digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    return rev;
}

/*
bool back(int num)
{
    int rev=0;
    int temp;
    if(Prime(num))
    {
    temp=num;
        while(num!=0)
        {
        int digit=num%10;
        rev=rev*10+digit;
        num=num/10;
        }
    }
    if(temp==rev)
    {
        return true;
    }
    else
    return false;
    return 0;
}*/

int main()
{
    int m,n;
    cin>>m>>n;
    bool flag=0;
    for(int i=m;i<=n;i++)
    {
        if(Prime(back(i))&&Prime(i))
        {
            if(flag)
            cout<<","<<i;
            else
            cout<<i;flag=1;
        }
    }
    if(flag==0)
    cout<<"No";
}






