#include<iostream>
#include<cstring>
using namespace std;
int a[205][205];
int b[205][205];

bool isprime(int n)
{
    if(n==1)return false;
    else
    {
        for(int i=2;i*i<=n;i++)
            if(n%i==0)
                return false;
    }
    return true;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        memset(b, 0, sizeof b);
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                cin>>a[i][j];
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                if(isprime(a[i][j]))
                    b[i][j]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                int cnt=0;
                for(int x=i;x>=1;x--)
                {
                    if(b[x][j])
                        cnt++;
                    else
                        break;
                }
                cout<<cnt<<" ";
            }
            cout<<endl;
        }

    }
}