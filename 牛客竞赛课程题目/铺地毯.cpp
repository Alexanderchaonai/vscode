#include<iostream>
using namespace std;
const int N=1e5;
int a[N],b[N],g[N],k[N];
int main()
{
    int n,ans=-1;
    int temp=n;
    cin>>n;
    int i=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i]>>g[i]>>k[i];
    }
    int x,y;
    cin>>x>>y;
    for(int i=1;i<=n;i++)
    {
        if(x>=a[i]&&x<=a[i]+g[i]&&y>=b[i]&&y<=b[i]+k[i])
        ans=i;
    }
    cout<<ans<<endl;
    return 0;
}