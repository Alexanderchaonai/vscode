#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
    int num;
    int a[1010]={0};//用于表示每个灯笼的状态
    while(m--)
    {
        cin>>num;
        if(num==1)
        {
            a[1]=1-a[1],a[2]=1-a[2],a[n]=1-a[n];//学习这种取反的操作
        }
        else if(num==n)
        {
            a[n]=1-a[n],a[n-1]=1-a[n-1],a[1]=1-a[1];
        }
        else
        {
            a[num]=1-a[num],a[num-1]=1-a[num-1],a[num+1]=1-a[num+1];
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
}