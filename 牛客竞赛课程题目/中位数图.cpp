#include<iostream>
#include<vector>
using namespace std;
const int N=1e6;
int main()
{
    int n,b,a[N]={0};
    cin>>n>>b;
    int pos=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>b)
        {
            a[i]=1;
        }
        else if(a[i]<b)
        {
            a[i]=-1;
        }
        else
        {
        pos=i;
        a[pos]=0;
        }
    }
        vector<int>sumleft(n+1,0);
        vector<int>sumright(n+1,0);
    for(int i=pos-1;i>=0;i--)
    {
        sumleft[i]=sumleft[i+1]+a[i];
    }
    for(int j=pos+1;j<n;j++)
    {
        sumright[j]=sumright[j-1]+a[j];
    }
        for(int i=0;i<pos;i++)
        {
            for(int j=pos+1;j<n;j++)
            {
                if(sumleft[i]+sumright[j]==0)
                cnt++;
                else
                continue;//如果这一轮循环没有找到匹配的前缀和，就a[j]再往后移再找
            }
        }
    cout<<cnt;
}
   
