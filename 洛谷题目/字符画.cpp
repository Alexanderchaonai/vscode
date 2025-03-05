#include<iostream>
using namespace std;
bool isprime(int n)
{
    if(n==1)return false;
    else
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1,cnt=0,c=(i-1)%26;;j++)
        {
            if(isprime((c+'A')+j))
            {
                cnt++;
                cout<<char(c+'A');
                c=(c+1)%26;
            }
            else
                cout<<" ";
            if(cnt==i*i)
                break;
        }
        cout<<endl;
    }
}