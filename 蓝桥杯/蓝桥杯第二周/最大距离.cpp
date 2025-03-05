#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1005]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int differ=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(fabs(i-j)+fabs(a[i]-a[j])>differ)
            differ=fabs(i-j)+fabs(a[i]-a[j]);
        }
    }
    cout<<differ;
}