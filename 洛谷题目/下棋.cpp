#include<iostream>
using namespace std;
int n,m;
char a[100][100];
int dx[4]={0,1,1,1};
int dy[4]={1,0,1,-1};
/*
检查四个方向
对于每个有棋子的点 (i, j)，需要检查四个方向上是否存在连续的五个相同棋子：

水平向右：dx = 0，dy = 1
垂直向下：dx = 1，dy = 0
主对角线（左上到右下，\ 方向）：dx = 1，dy = 1
副对角线（右上到左下，/ 方向）：dx = 1，dy = -1
*/
int main()
{
    cin>>n>>m;
    int cnt1=0,cnt2=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)// 枚举每一个有棋子的点
        {
            cin>>a[i][j];
            if(a[i][j]=='*') cnt1++;
            else if(a[i][j]=='$') cnt2++;
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]=='~')
                continue;
            for(int k=0;k<4;k++)//检查四个方向
            {
                bool found=true;
                int x=i,y=j;
                for(int l=1;l<5;l++)//每个方向上要加五个对应的长度进行检查
                {           
                    x+=dx[k],y+=dy[k];
                    if(x<1||y<1||x>n||y>m)
                    {
                        found=false;
                        break;
                    }
                }
                if(found)
            {
                if(a[i][j]=='*')
                    cout<<"Pleasing!";
                else
                    cout<<"zylwins!";
                return 0;
            }
            } 
        }
    }
    if(cnt1==cnt2)
        cout<<"W";
    else
        cout<<"Z";
}