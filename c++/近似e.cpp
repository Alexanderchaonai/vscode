#include<iostream>
using namespace std;

int factorial(int num)
{
    int sum=1;
    for(int i=1;i<=num;i++)
    {
        sum=sum*i;
    }
    return sum;
}

int main()
{
    int n;
    double e=0;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        double temp=1.0/factorial(i);
        e=e+temp;
    }
    printf("%.10lf",e);
}