#include<iostream>
#include<cmath>
using namespace std;
int a,b,c,d;
double f(double x)
{
    double res=0;
    res=a*x*x*x+b*x*x+c*x+d;
    return res;
}
double bin(double l,double r)
{
    double mid;
    while(r-l>=0.001)
    {
        mid=(l+r)/2;
        if(fabs(f(mid))<1e-5)
            return mid;
        if(f(mid)*f(l)<0)
            r=mid;
        else
            l=mid;
    }
    return (l+r)/2;
}
int main()
{
    cin>>a>>b>>c>>d;
    double x1,x2;
    for(double i=-100;i<=100;i++)
    {
        if(f(i)==0)
            printf("%.2lf ",i);
        if(f(i)*f(i+1)<0)
        {
            double res=bin(i,i+1);
            printf("%.2lf",res);
        }
    }
}