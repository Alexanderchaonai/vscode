#include<iostream>
using namespace std;

const int MOD=998244353;
int f(int x)
{
    if(x>=2&&x<=10)
    {
        return x*(x-1)%MOD;
    }
    if(x>10)
    {
        return (2*x*f(x-6))%MOD;
    }
    return -1;
}



int main()
{
    int n;
    cin>>n;
    int num=f(n);
    cout<<num;

}

