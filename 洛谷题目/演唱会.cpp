#include<iostream>
#include<algorithm>
using namespace std;
const int N=1e5;
int happysong[N];
int happy[105][N];
int index[N];
int c[N];
int n,m,a,b;
bool cmp(int a,int b)
{
    return happysong[a]>happysong[b];
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>a>>b;
    int hersum=0;
    int hermax=-1;
    int pos=0;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>happy[i][j];
            if(i==b&&happy[b][j]>hermax)
            {
                hermax=happy[b][j];
                pos=j;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        index[i]=i;
    }
    for(int j=1;j<=n;j++)//待选的歌曲数量
    {
        happysong[j]=0;
        for(int i=1;i<=a;i++)//学生数量
        {
            happysong[j]+=happy[i][j];
        }
        // if(j==pos)
        // {
        //     hersum=happysong[j];
        // }
    }
    sort(index+1,index+1+n,cmp);
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n-i;j++)
    //     {
    //         if(happysong[j]<happysong[j+1])
    //         {
    //             int temp=happysong[j];
    //             happysong[j]=happysong[j+1];
    //             happysong[j+1]=temp;
    //             temp=index[j];
    //             index[j]=index[j+1];
    //             index[j+1]=temp;
    //         }
    //     }
    // }
    //
    // for(int i=1;i<=n;i++)
    //     cout<<index[i]<<' '<<happysong[index[i]]<<endl;
    bool inlist=false;
    int herindex;
    for(int i=1;i<=m;i++)
    {
        if(index[i]==pos)
        {
            inlist=true;
            herindex=i;
            break;
        }
    }
    if(inlist)
    {
        int temp=index[herindex];
        for(int i=herindex;i>1;i--)
        {
            index[i]=index[i-1];
        }      
        index[1]=temp;
    }
    else
    index[m]=pos;
    for(int i=1;i<=m;i++)
    {
        cout<<index[i]<<" ";
    }
    return 0;
}