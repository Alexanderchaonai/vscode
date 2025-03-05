#include<iostream>
#include<cmath>
using namespace std;
int x[21];
int a[21];
int n,k;
int cnt=0;
bool isprime(int a)
{
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
            return false;
    }
    return true;
}

void dfs(int dep,int last)
{
    if(dep>k)
    {
        int sum=0;
        for(int i=1;i<=k;i++)
        {
            sum+=a[i];
        }
        if(isprime(sum))
            cnt++;
        return ;
    }
    for(int i=last+1;i<=n;i++)
    {
        a[dep]=x[i];
        dfs(dep+1,i);
    }
}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>x[i];
    dfs(1,0);
    cout<<cnt<<endl;
    return 0;
}