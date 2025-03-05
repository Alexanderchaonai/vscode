#include<iostream>
using namespace std;
int task_time[5005],g[5005];//前一个是每个任务的时间，后一个存储编号
long long sum_times[5005];//存储每一轮的总时间
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>task_time[i];
    }
    for(int i=1;i<=m;i++)//外层循环放每个任务
    {
        int pos=0;
        long long min_time=1e9+5;
        for(int j=1;j<=n;j++)//内层循环遍历每个节点，计算当前要把任务分配到哪个节点中，并记录节点的位置
        {
            if(sum_times[j]<min_time)
            {
                min_time=sum_times[j];
                pos=j;
            }
        }
        g[i]=pos;//将节点的编号存到g数组中
        sum_times[pos]+=task_time[i];//将对应节点的总时间加上该次任务的评测时间，然后进入下一次循环
    }
    for(int i=1;i<=n;i++)
    {
        bool flag=0;
        for(int j=1;j<=m;j++)
        {
            if(g[j]==i)
            {
                cout<<j<<" ";
                flag=1;
            }
        }
        if(!flag)
        {
            cout<<0;
        }
    cout<<endl;
    }
}

//总结：这题需要三个数组，一个数组存放每个评测任务的时间，一个存放每个节点的编号，一个存放每个节点当前的总时间