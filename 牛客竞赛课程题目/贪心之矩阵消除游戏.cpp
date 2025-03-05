#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a[20][20];
int lie[20];
int cnt1;
int n,m,k;
int ans;
int calc(int st)
{
    int sum=0;
    cnt1=0;
    for(int i=1;i<=n;i++)
    {
        if(st>>(i-1)&1)//选了的话就要遍历这一行的所有元素
        {
            for(int j=1;j<=m;j++)
            {
                sum+=a[i][j];
            }
            cnt1++;
        }
        else//不选的话也还是要遍历这一行的所有元素
        {
            for(int j=1;j<=m;j++)
            {
                lie[j]+=a[i][j];
            }
        }
    }
    return sum;
}
int main()
{
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            //sum+=a[i][j];
        }
    }
    ans=0;
    // if(k>=m||k>=n)
    // {
    //     cout<<sum;
    // }
    
    //枚举行，就是找哪些地方是要按行拿走的，行的枚举用01串枚举
        //15个0到15个1，数字的第i位为0表示不选，为1表示选
        for(int st=0;st <= ((1 << n) - 1);st++)
        {
            memset(lie,0,sizeof(lie));
            int sum=calc(st);//calc函数里面，除了要维护已选的行的总和
            //还要维护出来没选的行里面的格子按列求和，再对他们贪心
            if(cnt1>k)//选的行选多了，直接continue
            {
                continue;
            }
            int rest=k-cnt1;
    //没选够。剩下的次数就是用来贪心
             sort(lie+1,lie+m+1);
            for(int i=1,j=m;i<=rest&&j>=1;i++,j--)//循环共需进行rest次，lie排序之后直接从后往前加rest次就可以了
            {
                sum+=lie[j];//把大的第j的列加给sum
            }
            ans=max(ans,sum);
        }
    cout<<ans<<endl;
    return 0;
}