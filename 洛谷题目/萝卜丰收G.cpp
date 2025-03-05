#include<iostream>
using namespace std;
int a[1000][1000];
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int ans=1e6;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    int pos=0;
    for(int i=1;i<=n;i++)//枚举左上行
    {
        for(int j=1;j<=m;j++)//枚举左上列
        {
            for(int x=i;x<=n;x++)//枚举右下行
            {
                for(int y=j;y<=m;y++)//枚举右下列
                {
                    int cnt=0;
                    int S=0;
                    for(int p=i;p<=x;p++)//遍历从i开始到x，每一行
                    {
                        for(int q=j;q<=y;q++)//遍历从j开始到y，每一列
                        {
                            S++;
                            if(a[i][j]==1)
                            cnt++;
                        }
                    }
                    if(cnt>=k)
                    {
                        ans=min(ans,S);
                        if(ans>S)
                        ans=S;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
}