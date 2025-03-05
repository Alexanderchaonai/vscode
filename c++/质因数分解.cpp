#include<iostream>
#include<cmath>
using namespace std;
/*
bool ifPrime(int num)
{
    bool flag=0;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            flag=1;
            return false;
        }
    }
    if(flag==0)
    {
        return true;
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int num1,num2;
    for(int i=2;i<=sqrt(n);i++)
    {
        num1=i;
        num2=n/num1;
        if(ifPrime(num1)&&ifPrime(num2)&&num1!=num2)
        {
            cout<<num2<<endl;
            return 0;
        }
    }
}*/

int main()
{
    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        cout<<n/i<<endl;
        break;;
    }
}

