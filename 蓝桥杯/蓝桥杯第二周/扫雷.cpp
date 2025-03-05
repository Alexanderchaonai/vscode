#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[105][105]={0};
    bool b[105][105]={0};
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]!=0)
            b[i][j]=1;
        }
    cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            int count=0;
            if(b[i][j]!=0)
            {
                cout<<9<<" ";
            }
            else 
            {
                if(b[i-1][j]!=0)
                count++;
                if(b[i+1][j]!=0)
                count++;
                if(b[i][j-1]!=0)
                count++;
                if(b[i][j+1]!=0)
                count++;
                if(b[i-1][j-1]!=0)
                count++;
                if(b[i-1][j+1]!=0)
                count++;
                if(b[i+1][j-1]!=0)
                count++;
                if(b[i+1][j+1]!=0)
                count++;
            }
            if(count!=0)
            cout<<count<<" ";
        }
        cout<<endl;
    }
}