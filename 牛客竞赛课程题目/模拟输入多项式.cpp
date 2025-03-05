#include<iostream>
using namespace std;
int  main()
{
    int n;
    cin>>n;
    int a[110]={0};
    bool first=true;
    for(int i=n;i>=0;i--)
    {
        cin>>a[i];
    }
    for(int i=n;i>=0;i--)
    {
        if(a[i]==0)
        continue;

        if(first)
        {
            first=false;
            if(a[i]<0)
            cout<<"-";
        }
        else
        {
            if(a[i]<0)
            cout<<"-";
            else
            cout<<"+";
        }
        if(a[i]==1||a[i]==-1);
            else
            cout<<fabs(a[i]);

        if(i==1)
        cout<<"x";
            else if(i>1&&i!=0)
            cout<<"x^"<<i;
    }
}