#include<iostream>
#include<cstring>
using namespace std;
int n,m;
int ans;
int a[10][10];
int dx[9]={0,1,1,1,0,0,-1,-1,-1};
int dy[9]={0,1,-1,0,-1,1,0,1,-1};
int marked[10][10];
void dfs(int x,int y,int now)
{
    if(y>m)
    {
        x++;
        y=1;
    }
    if(x>n)
    {
        if(now>ans)
            ans=now;
        return;
    }
    dfs(x,y+1,now);
    if(marked[x][y]==0)
    {
        marked[x][y]=1;
        for(int k=1;k<=8;k++)
        {
            if(x+dx[k]>0&&x+dx[k]<=n&&y+dy[k]>0&&y+dy[k]<=m)
                marked[x+dx[k]][y+dy[k]]++;
        }
        dfs(x,y+2,now+a[x][y]);
        marked[x][y]=0;
        for(int k=1;k<=8;k++)
            marked[x+dx[k]][y+dy[k]]--;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }
        ans=0;
        memset(marked,0,sizeof(marked));
        dfs(1,1,0);
            cout<<ans<<endl;
    }
}