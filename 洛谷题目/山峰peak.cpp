#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=1005;

int main()
{int x1,x2,y1,y2;
int n,m,T;
int b[1000000];
int c[1000000];
int a[N][N];
int cnt=0;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>T;
    while(T--)
    {
        cin>>x1>>y1>>x2>>y2;
        swap(a[x1][y1],a[x2][y2]);
    }
    int dx[]={-1,1,0,0},dy[]={0,0,1,-1};
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                int count=0;
                for(int k=0;k<4;k++)
                {
                    if(a[i][j]>a[i+dx[k]][j+dy[k]])
                    {
                        count++;
                        continue;
                    }
                    else
                        break;
                }
                if(count==4)
                {
                    b[cnt]=i;
                    c[cnt]=j;
                    cnt++;
                }
            }
        }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++)
    {
        cout<<b[i]<<" "<<c[i]<<endl;
    }

}