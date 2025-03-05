#include<iostream>
using namespace std;

void feibonaci(int a)
{
    if(a==1||a==2)
    {
        cout<<1<<endl;
    }
    else
    {   int m=1,b=1,num;
    for(int i=3;i<=a;i++)
    {
        num=m+b;
        m=b;
        b=num;
    }
    cout<<num<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int a;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        feibonaci(a);
    }
}