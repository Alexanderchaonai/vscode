#include<iostream>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[105][105]={0};
    int b[105][105]={0};
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=k;j++)
        {
            cin>>b[i][j];
        }
    }
    int c[105][105]={0};
    for(int x=1;x<=n;x++)
    {
        for(int y=1;y<=k;y++)
        {
            for(int z=1;z<=m;z++)
            {
                c[x][y]+=a[x][z]*b[z][y];//由公式可得，一次相乘中，a的行没变，b的列没变
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}