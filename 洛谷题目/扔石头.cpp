#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long x,y;
    while(t--)
    {
        cin>>x>>y;
        if(x<y)
        {
            x+=1;
        }
        else
        y+=1;
        while(x!=0||y!=0)
        {
            if(x>y)
            {
                x=floor(x/2);
            }
            if(x==0)
                break;
            else
            {
                y=floor(y/2);
            }
            if(y==0)
                break;
        }
        cout<<x<<" "<<y<<endl;
    }
}