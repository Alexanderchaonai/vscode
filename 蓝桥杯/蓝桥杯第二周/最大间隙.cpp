#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1005]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int max=-100000;
    for(int i=1;i<=n;i++)
    {
        if(max<a[i+1]-a[i])
        max=a[i+1]-a[i];
    }
    cout<<max;
}