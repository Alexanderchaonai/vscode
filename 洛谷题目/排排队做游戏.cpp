#include<iostream>
using namespace std;
int a[10005];
int g[10005];//缓存数组
int main()
{
    int n,t,k;
    cin>>n>>t;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    while(t--)
    {
        int cnt=0;
        cin>>k;
        g[2]=a[k+1];
        for(int i=1;i<=k;i++)
        {
            for(int j=0;i+j*k<=n;j++)
            {
                g[++cnt]=a[i+j*k];
            }

        }
        for(int i=1;i<=n;i++)
        {
            a[i]=g[i];//排完队之后，直接将缓存数组整个复制到a数组中再输出
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
}