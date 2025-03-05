#include<iostream>
using namespace std;

const long long N=998244353;
int f(int x)
{
    if(x<=10)
    {
        return (x*(x-1))%N;
    }
    if(x>10)
    {
        return (2*x*f(x-2))%N;
    }
}

int main()
{
    int n;
    cin>>n;
    int number=f(n);
    cout<<number;

}