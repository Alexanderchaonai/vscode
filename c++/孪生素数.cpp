#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num)
{
    if(num<=1)return false;
    if(num<=2)return true;
    for(int i=3;i<=sqrt(num);i++)
    {
        if(num%i==0)
        return false;
    }
    return true;
}


int main()
{
    int a;
    cin>>a;
    int i=a;
    while(true)
    {
        if(isPrime(i)&&isPrime(i+2))
        {
            cout<<i<<" "<<i+2;
            break;
        }
        i++;
    }
    return 0;
}