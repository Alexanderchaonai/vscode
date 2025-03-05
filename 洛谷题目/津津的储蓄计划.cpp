#include<iostream>
using namespace std;
int a[13];
int cf[13];
int main()
{
    for(int i=1;i<=12;i++)
    {
        cin>>a[i];
        cf[i]=300-a[i];
    }
    int sum=0;
    int sub=0;
    for(int i=1;i<=12;i++)
    {
        sum+=cf[i];
        if(sum>=100)
        {
            while(sum>=100)
            {
                sum-=100;
                sub+=100;
            }
        }
        if(sum<0)
        {
            cout<<"-"<<i<<endl;
            return 0;
        }
    }
    cout<<sub*1.2<<endl;
    return 0;
}