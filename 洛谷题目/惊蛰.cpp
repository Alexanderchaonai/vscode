#include<iostream>
#include<cmath>
using namespace std;

bool del(long long n)
{
    int a[20]={0};
    int b[20]={0};
    int original_a[20]={0};
    int cnt=0;
    while(n)
    {
        a[cnt]=n%10;
        n/=10;
        cnt++;
    }
    // 备份原始数组 a
    for(int i = 0; i < cnt; i++) 
    {
        original_a[i] = a[i];
    }
    for(int l=0;l<cnt;l++)
    {
        for(int r=l;r<cnt;r++)
        {
             // 重置数组 a 为原始数组
            for(int i = 0; i < cnt; i++)
            {
                a[i] = original_a[i];
            }
            for(int i=l;i<=r;i++)
            {
                a[i]=0;
            }
        }
        long long sum=0;
        int index=0;
        for(int i=cnt-1;i>=0;i--)
        {
            if(a[i]!=0)
            {
                b[index]=a[i];
                // sum=sum*10+b[index];
                // index++;
            }
            if(index==0)
                continue;
        }
        for(int i=index-1;i>=0;i--)
        {
            sum=sum*10+b[i];
        }
        if(sum%4==0)
        {
            return true;
        }
        else
        continue;
    }
    return false;
}

int main()
{
    int t;
    long long n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%4==0)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        else
        {
            if(del(n))
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
}