#include<iostream>
#include<cmath>
using namespace std;

typedef struct coordinate
{
    int x,y;
}co;
co code[1005],sur[1005],guard[1005];
bool vis[1005];
int main()
{
    int n,k,t;
    cin>>n>>k>>t;
    for(int i=0;i<n;i++)
    {
        cin>>code[i].x>>code[i].y;
    }
    for(int i=0;i<k;i++)
    {
        cin>>sur[i].x>>sur[i].y;
    }
    int cnt=0;
    for(int i=0;i<t;i++)
    {
        int max=0;
        int pos=0;
        bool flag=false;
        cin>>guard[i].x>>guard[i].y;
        for(int j=0;j<n;j++)
        {
            double dist=sqrt(pow(guard[i].x-code[j].x,2)+(pow(guard[i].y-code[j].y,2)));
            if(dist>max)
            {
                max=dist;
                pos=j;
            }
            else if(dist==max&&j<pos)
            {
                pos=j;
            }
        }
        if(!vis[pos])
        {

            for(int q=0;q<k;q++)
            {
                if(sur[q].x==code[pos].x&&sur[q].y==code[pos].y)
                {
                    cnt++;
                    vis[pos]=1;
                    break;
                }
            }
        }
    }
    cout<<cnt<<endl;

}