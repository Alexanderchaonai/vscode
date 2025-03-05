#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    if(a==b)
    {
        cout<<0;
    }
    else if(b==0)
    return 0;
    else
    {
    for(int i=1;i<=n;i++)
    {
        a=a%b;
        a=a*10;
        a=a/b;
    }
    cout<<a;
    return 0;
    }
}