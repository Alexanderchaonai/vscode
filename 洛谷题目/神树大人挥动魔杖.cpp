#include<iostream>
using namespace std;
int main()
{
    int a,b,f;
    cin>>a>>b;
    char c;
    cin>>c;
    cin>>f;
    if(f==0)
    {
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=b;j++)
            {
                if(i==1||i==a)
                {
                    cout<<c;
                }
                else
                {
                    if(j==1)
                    cout<<c;
                    else if(j>1&&j<b)
                    cout<<" ";
                    else
                    cout<<c;
                }
            }
            cout<<endl;
        }
    }
    else
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<c;
        }
        cout<<endl;
    }
}