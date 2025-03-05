#include<iostream>
using namespace std;
int cnt=0,sum=0;
int n;
int a[14];
int lie[10],zd[30],fd[30];
//一行一行的放，因为是n*n
void dfs(int dep)//这里的深度优先搜索是按行来进行的，每进一行就代表一层搜索
{
    if(dep>n)
    {
        cnt++;
        sum++;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(a[i]==j&&sum<=3)
                {
                    cout<<j<<" ";
                }
            }
        }
        if(sum<=3)
            cout<<endl;
        // for(int i=1;i<=n;i++)
        // {
        //     for(int j=1;j<=n;j++)
        //     {
        //         if(a[i]==j)//如果a[i]这位置有皇后，就输出Q
        //             cout<<"Q";
        //         else
        //             cout<<".";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        if(lie[i]==0&&zd[dep-i+n]==0&&fd[dep+i]==0)//我们用索引来判断是哪一条对角线，因为主对角线和副对角线
        //的性质，主对角线就是行-列是定值，副对角线就是行+列是定值，但是有一个问题，行-列有可能为负，而数组的索引
        //是没有负数的，所以我们统一加一个最大的行就可以了
        //注意，这里zd，fd数组的索引的有且唯一有的作用就是判断某一个对角线有没有被用过，它不需要真的表示这一条物理意义上的对角线，只需要判断有没有被用过就可以了
        {
            a[dep]=i;//表示在第 dep 行放置一个皇后，列号为 i
            lie[i]=1,zd[dep-i+n]=1,fd[dep+i]=1;
            dfs(dep+1);
            lie[i]=0,zd[dep-i+n]=0,fd[dep+i]=0;
        }
    }
}
int main()
{
    cin>>n;
    dfs(1);
    cout<<cnt<<endl;
}