#include<iostream>
using namespace std;
int t[1005];
int a[1005][105];
bool vis[1005];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>t[i];
        for(int j=1;j<=t[i];j++)
        {
            cin>>a[i][j];
        }
    }
    vis[1]=true;
    for(int i=1;i<=t[1];i++)
    {
        vis[a[1][i]]=true;
    }
    for(int i=1;i<=t[1];i++)
    {
        int p=a[1][i];
        for(int j=1;j<=t[p];j++)
        {
            vis[a[p][j]]=true;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i])
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}