#include<iostream>
using namespace std;
bool tong[1005];
int main()
{
    int n,m;
    int num;
    cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            cin>>num;
            tong[num]=1;
        }
    bool all=true;
        for(int i=0;i<n;i++)
        {
            if(!tong[i])
            {
                all=false;
                break;
            }
        }
    if(all)
        cout<<n;
    else
    {
        for(int i=0;i<n;i++)
        {
            if(!tong[i])
            {
                cout<<i<<" ";
            }
        }
    }

}