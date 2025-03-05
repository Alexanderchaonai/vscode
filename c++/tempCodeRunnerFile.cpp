#include<iostream>
#include<cmath>
using namespace std;

bool prime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}




int main()
{
    int m,n;
    cin>>m>>n;
    int max=0;
    for(int i=m;i<=n;i++)
    {
        if(prime(i))
        {
            cout<<i<<" ";
        }
        else
        {
            for(int j=1;j<=(i/2);j++)
            {
                if(prime(j)&&i%j==0)
                {
                    if(max<j)
                    {
                        max=j;
                    }
                }

            }
            cout<<max<<" ";
        }
    }
}