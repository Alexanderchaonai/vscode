#include<iostream>
using namespace std;
int n=5;
bool vis[5];
int a[5];
void dfs(int dep)
{
    if(dep>n)
    {
        for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        return ;//这里的return不是终止程序的意思，是指结束这一次的递归
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i])
            continue;
            //只要我找到了一个没被放过的数字，就立刻放到dep位，同时dep的深度加一，然后继续找下一个没被放过的数字，直到dep的深度大于n为止
            //递归结束之后，再将这层的dep位清空，把放过的数字也清除，再继续找下一个没被放过的数字，注意我从未改变过dep的值，也就是说
            //这个位置的深度是被记录留存的，在以dep位为基础延伸到后面的这一个分支都放完之后，就重新再次放置dep位上的数字,同时已经被放置
            //过的数字可以继续再被使用，接下来i会加1，也就是说会继续尝试放i+1，看是不是可行的，这样就可以形成一个全排列
        a[dep]=i,vis[i]=1;
        dfs(dep+1);
        //回溯，恢复现场
        a[dep]=0,vis[i]=0;
    }
}

int main()
{
    dfs(1);
}