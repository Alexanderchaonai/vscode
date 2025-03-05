#include<iostream>
using namespace std;
int n,m,r;
int f1[105],f2[105],p1[105],p2[105];
int main()
{
    cin>>n>>m>>r;
    for(int i=0;i<n;i++)
    {
        cin>>f1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>p1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>f2[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>p2[i];
    }
    int num;
    int temp=n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        num--;//又又又又又又又忘了,num要--才能对应从0开始的索引,要错多少次.......我真的服了,就是这里错了
        bool found=false;
        int pos=0;
        int min=r+1;
        for(int j=0;j<n;j++)
        {
            if(f1[num]==f2[j])
            {
                if(p1[num]<p2[j])
                {
                    if(p2[j]<min)
                    {
                        found=true;
                        min=p2[j];
                        pos=j;
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        if(found)
        {
            temp--;
            p2[pos]=-1;
        }
    }
    cout<<temp<<endl;
}