#include<iostream>
using namespace std;
int a[1000];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i-1;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

    int cnt=0;
    for(int i=1;i<=n;i++)
    {
    int cnt1=0;
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]<=a[j])
            break;
            else
            {
                cnt1++;
            }
        }
        if(cnt1==n-i)
        cnt++;
    }
    cout<<cnt;
}