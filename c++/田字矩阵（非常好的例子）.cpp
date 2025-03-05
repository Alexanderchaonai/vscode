
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            if(j==1||j==N)
            {
                cout<<'|';
            }
            else if(i==1||i==N)
            {
                cout<<'-';
            }
            else if(i==(N+1)/2&&j!=(N+1)/2)
            {
                cout<<'-';
            }
            else if(j==(N+1)/2&&i!=(N+1)/2)
            {
                cout<<'|';
            }
            else
            cout<<"x";
        }
        cout<<endl;
    }
}