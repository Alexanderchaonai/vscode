#include<iostream>
using namespace std;
int n,t;
int a[10005];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool flag=false;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(long long i=1;i<=1e8;i++)
        {
            bool found=true;
            for(int j=1;j<=n;j++)
            {
                if(i%a[j]==0||a[j]%i==0)
                {
                    found=false;
                    break;
                }
            }
            if(found)
            {
                cout<<i<<endl;
                flag=true;
                break;
            }
        }
        if(!flag)
            cout<<-1<<endl;
    }

}