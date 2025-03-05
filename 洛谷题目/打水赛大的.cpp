#include<iostream>
using namespace std;
const int N=1e5+5;
const int M=2e5+5;
int s[N];
int w[M];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    for(int i=1;i<=m;i++)
    {
        cin>>w[i];
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(s[i]<200)
        {
            for(int j=1;j<=m;j++)
            {
                if(w[j]==i)
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout<<cnt;

}
