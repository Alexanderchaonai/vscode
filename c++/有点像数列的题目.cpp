#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n;
    cin>>n;
    double Sn=0;
    for(double i=1;i<=n;i++)
    {
        Sn=1/i*pow(-1,i-1)+Sn;
    }
    printf("%.4lf",Sn);
}