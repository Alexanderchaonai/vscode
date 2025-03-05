#include<iostream>
using namespace std;
int main()
{
    char x;
    cin>>x;
    for(int i=1;i<=4;i++)
    {
        
        for(int j=1;j<=4-i;j++)
        {
        cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<x;
        }
        cout<<endl;
    }
    for(int i=1;i<=3;i++)
    {

        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=7-2*i;k++)
        {
            cout<<x;
        }
        cout<<endl;
    }
}