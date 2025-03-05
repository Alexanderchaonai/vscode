#include<iostream>
using namespace std;
const int N=1e5;
bool a[N]={0};
int main()
{
    int n,m;
    cin>>n>>m;
    int t;
    while(m--)
    {
        cin>>t;
        if(t>=3)
        {
            for(int j=t-2;j<=t+2;j++)
            {
                a[j]=1;
            }
        }
        if(t==2)
        {
            for(int k=t-1;k<=t+2;k++)
            {
                a[k]=1;
            }
        }
        if(t==1)
        a[t]=1,a[t+1]=1;
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1)
        cnt++;
    }
    cout<<cnt;

}