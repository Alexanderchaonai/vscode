#include<iostream>
using namespace std;
int n,m;
int vis[200][200];
int d[8][2]={{-2,1},{-2,-1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1}};
void print()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            printf("%4d",vis[i][j]);
        }
        cout<<endl;
    }
    cout<<endl;
}

void dfs(int dep,int x,int y)
{
    if(dep==n*m)
    {   
        print();
        return;
    }
    else
    {
        for(int i=0;i<8;i++)
        {
            int dx=x+d[i][0];
            int dy=y+d[i][1];
            if(dx<=0||dy<=0||dx>n||dy>m)continue;
            if(vis[dx][dy]!=0)continue;
            vis[dx][dy]=dep+1;
            dfs(dep+1,dx,dy);
            vis[dx][dy]=0;
        }
    }
}
int main()
{
    cin>>n>>m;
    vis[1][1]=1;
    dfs(1,1,1);
    return 0;
}