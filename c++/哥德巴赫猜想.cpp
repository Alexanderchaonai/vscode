#include<iostream>
#include<cmath>
using namespace std;

int oddPrimeNum(int n)
{
    bool flag=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=0;
            return 0;
        }
    }
    if(flag==1&&n%2!=0)
    {
        return flag;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=3;i<=(n/2);i+=2)
    {
        if(oddPrimeNum(i)&&oddPrimeNum(n-i))
        {
            printf("%d=%d+%d\n",n,i,n-i);
        }
    }
}