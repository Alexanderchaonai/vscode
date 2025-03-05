#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cin>>a>>b>>c;
    bool f;
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
            break;
        }
        cout<<c;
        for(int m=1;m<=b-2;m++)
        {
            cout<<" ";
        }
        cout<<c;
        cout<<endl;  
        }
        }
        if(f!=0)
        {
            for(int i=1;i<=a;i++)
            {
                for(int j=1;j<=b;j++)
                {
                    cout<<c;
                }
                cout<<endl;
            }
        }
    return 0;
}