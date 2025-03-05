#include<iostream>
using namespace std;
const int N=110;
int main()
{
    int n,m;
    cin>>n>>m;
    int k;
    cin>>k;
    bool st[N][N]={0},st1[N][N]={0};
    int t;
    cin>>t;
    int r,c;
    for(int i=0;i<t;i++)
    {
        cin>>r>>c;
        st[r-1][c-1]=1;
    } 
    int dx[]={1,-1,0,0},dy[]={0,0,-1,1};
    while(k--)
    {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                st1[i][j] = st[i][j]; // 将上一轮灌溉状态保存下来
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {

                if(st1[i][j])
                {
                    for(int x=0;x<4;x++)
                    {
                    int x1=i+dx[x],y1=j+dy[x];
                    if(x1>=0&&x1<n&&y1>=0&&y1<m)
                    {
                    st[x1][y1]=true;
                    }
                }
                }
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(st[i][j]) ans++;
        }
    }
  cout<<ans<<endl;
  return 0;
}