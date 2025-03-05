#include<iostream>
using namespace std;
//n的n次方
int fac(int n)
{
    int sum=1;
    for(int i=1;i<=n;i++)
    {
        sum=sum*n;
    }
    return sum;
}
int main()
{
    int k;
    cin>>k;
    int sum1=0;
    int i=1;
    while(sum1+i<=k)
    {
        sum1=sum1+i;
        i++;
    }
    int sum2=0;
    for(int j=1;j<=i-1;j++)
    {
        int temp=j*j;
        sum2=sum2+temp;
    }
    sum2=sum2+(k-sum1)*(i);
    cout<<sum2;
}