#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[10005]={0};
    for(int i=1;i<=2*n;i++)
    {
        cin>>a[i];
        if(n==1)
        {
            if(a[1]==2&&a[2]==1)
            {
            cout<<"Yes";
            break;
            }
            else
            {
            cout<<"No";
            break;
            }
        }
    }
    int count=0;
    for(int i=1;i<=2*n;i++)
    {
        for(int j=i;j<=2*n;j++)
        {
            if(a[i]==j&&a[j]==i&&a[i]!=i&&a[j]!=j)
            {
                count++;
            }
        }
    }
    if(count==n)
    {
        cout<<"Yes";
    }
    else
    cout<<"No";

}