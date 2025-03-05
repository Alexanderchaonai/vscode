#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
//记住，队列里存放的东西是一个值，就是每个点到起点的距离，这个是有计算公式的，就是i*m+j
int n,m;
int a[100][100];
int dis[100][100];//记录每一个点到起点的距离，同时这里的dis数组也承担了一个vis数组的作用，用来判断这个点有没有被走过
int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
queue<int>q;
int inmap(int x,int y)
{
    return x>=0&&y>=0&&x<n&&y<m;
}

void bfs(int x,int y)
{
    memset(dis,-1,sizeof(dis));//初始化所有为未访问
    dis[x][y]=0;//表示起点到起点的距离为零，我们最后直接输出这个dis数组就可以清晰的看到每个点到起点需要走多少步
    q.push(x*m+y);//已经求出来当前这个点(x,y)到起点的距离了，将它放入队列中，将起点压入队列
    while(!q.empty())//只要队列不为空，就把队首拿出来
    {
        int temp=q.front();//获取队首元素，拿出来后考虑这个点上下左右能走到的方向的点哪些是可以走的
        q.pop();//注意，这里获取了队首元素之后一定要记得把它自己弹出来，否则队列将会无限增长导致死循环
        x=temp/m;
        y=temp%m;//已经得到了这个点对应的坐标了，接下来就是遍历四个方向
        for(int i=0;i<4;i++)
        {
            int dx=x+dir[i][0];
            int dy=y+dir[i][1];
            if(inmap(dx,dy)&&a[dx][dy]==1&&dis[dx][dy]==-1)//如果遍历在范围里面并且没有碰到障碍物并且这个点还没有走过
            {
                dis[dx][dy]=dis[x][y]+1;//就把它对应的距离加一，表明又走了一步，注意这里是(x,y)点，dx和dy只是走的距离
                q.push(dx*m+dy);//同时把这个点距离起点的距离放到队列里面，以便进行下一次分身
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        } 
    }
    bfs(0,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%4d",dis[i][j]);
        } 
        cout<<endl;
    }
}