#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int n;
        cin>>n;
        bool flag=0;
        int a[10000]={0};
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int k=0;k<n;k++)
        {
            if(a[k]==0)
            {
                cout<<"yes"<<endl;
                flag=1;
                break;
            }
        }
        if(!flag)
        cout<<"no"<<endl;
    }
}