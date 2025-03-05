#include<iostream>
using namespace std;
int a[105][105];
int x[105],y[105];
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int ans=0;ans<=1e4;ans++)
    {
         // 重置 x 和 y 数组
        for (int i=1;i<=n;i++)
            x[i]=0;
        for (int j=1;j<=m;j++)
            y[j]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                x[i]+=a[i][j];
                y[j]+=a[i][j];
            }
        }
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i][j]>=x[i]+y[j])
                    cnt++;
            }
        }
        if(cnt>=k)
        {
            cout<<ans;
            break;
        }
        else
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=m;j++)
                {
                    a[i][j]-=1;
                }
            }
        }
    }
}