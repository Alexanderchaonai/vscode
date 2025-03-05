#include<iostream>
#include<vector>
using namespace std;
int n,sum,res;
int a[100];
int last[100];
bool used[100];
bool first=true;
bool cmp(int a[],int b[],int lens)
{
    for(int i=1;i<=n;i++)
    {
        if(a[i]<b[i])return true;
        else return false;
    }
    return 0;
}
int getsum(vector<int>seq) 
{
    while(seq.size()>1) 
    {
        vector<int>next_seq;
        for (size_t i = 0;i<seq.size()-1;i++) 
            next_seq.push_back(seq[i]+seq[i + 1]);
        seq=next_seq;
    }
    return seq[0];
}
void dfs(int dep)
{
    if(dep==n+1)
    {
        vector<int>seq(a+1,a+n+1);
        if(getsum(seq)==sum)
        {
            if(first)
            {
                for(int i=1;i<=n;i++)
                    last[i]=a[i];
                first=false;
            }
            else
            {
                if(cmp(a,last,n)>0)
                {
                    for(int i=1;i<=n;i++)
                    {
                        last[i]=a[i];
                    }
                }
            }
        }
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(used[i])
            continue;
        else
        {
            a[dep]=i,used[i]=1;
            dfs(dep+1);
            a[dep]=0,used[i]=0;
        }
    }
}
int main()
{
    cin>>n>>sum;
    dfs(1);
    if(!first)
    {
        for(int i=1;i<=n;i++)
            cout<<last[i]<<" ";
    }
    return 0;
}