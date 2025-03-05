#include<iostream>
using namespace std;
int n,a;
const int N=1e7;
int f[N];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int cnt=0;
        int num1,num2;
        bool found=false;
        bool flag=false;
        for(int i=1;i<=n;i++)  
        {
            cin>>a;
            f[a]++;
        }
        for(int i=1;i<=N;i++)
        {
            if(cnt>2)
            {
                cout<<"No"<<endl;
                flag=true;
                break;
            }
            if(f[i]&&!found)
            {
                cnt++;
                num1=f[i];
                found=true;
            }
            if(f[i]&&found)
            {
                cnt++;
                num2=f[i];
            }
        }
        if(num1==num2&&!flag)
            cout<<"Yes"<<endl;
    }
    return 0;
}