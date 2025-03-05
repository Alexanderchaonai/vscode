#include<iostream>
#include<set>
using namespace std;
int a,b,c;
int v1,v2,v3;
bool vis[25][25][25];
set<int>res;//用set自动去重和排序，然后转换为vextor输出
void dfs(int a,int b,int c)//a,b,c记录当前桶里牛奶数量
{
    if(vis[a][b][c])return;
        vis[a][b][c]=true;
    if(a==0)
        res.insert(c);
    if(a>0)
    {
        if(b<v2)
        {
            int d=min(v2-b,a);
            dfs(a-d,b+d,c);
        }
        if(c<v3)
        {
            int d=min(v3-c,a);
            dfs(a-d,b,c+d);
        }
    }
    if(b>0)
    {
        if(a<v1)
        {
            int d=min(b,v1-a);
            dfs(a+d,b-d,c);
        }
        if(c<v3)
        {
            int d=min(b,v3-c);
            dfs(a,b-d,c+d);
        }
    }
    if(c>0)
    {
        if(a<v1)
        {
            int d=min(c,v1-a);
            dfs(a+d,b,c-d);
        }
        if(b<v2)
        {
            int d=min(c,v2-b);
            dfs(a,b+d,c-d);
        }
    }
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    v1=a,v2=b,v3=c;
    dfs(0,0,c);
    for(int x:res)cout<<x<<" ";
    return 0;
}