#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2!=0)
    {
    int a[10005]={0};
    for(int i=1;i<=n;i++)
    {
        if(i<=n/2+1)
        a[i]=(n-i)*2;
        if(i>n/2+1)
        a[i]=(i-1)*2;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
    }
    else
    {
    int b[10005]={0};
    for(int i=1;i<=n;i++)
    {
        if(i<=n/2)
        b[i]=(n-i)*2;
        if(i>n/2)
        b[i]=(i-1)*2;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<b[i]<<endl;
    }
    }
}