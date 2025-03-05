#include<iostream>
#include<algorithm>
using namespace std;
const int N=1e6;

bool cmp(string a,string b)
{
    return a<b;
}
int main()
{
    int n,m,l;
    cin>>n>>m>>l;
    string cur[N],exit[N],next[N];
    for(int i=1;i<=n;i++)
    {
        cin>>cur[i];
    }
    for(int i=1;i<=m;i++)
    {
        cin>>exit[i];
    }
    for(int i=1;i<=l;i++)
    {
        cin>>next[i];
    }
    for(int i=1;i<=m;i++)//遍历退出名单
    {
        for(int j=1;j<=n;j++)//遍历当前名单
        {
            if(cur[j]==exit[i])
            {
                for(int k=j;k<n;k++)//删除cur[j]
                {
                    cur[k]=cur[k+1];
                }
                n--;//减少当前名单数量
                j--;//调整索引，检查新的cur[j]是否需要删除
            }

        }
    }
    for(int index=1;index<=l;index++)
    {
        cur[++n]=next[index];
    }
    sort(cur+1,cur+n+1,cmp);
    for(int i=1;i<=n;i++)
    {
        cout<<cur[i]<<endl;
    }
    return 0;

}