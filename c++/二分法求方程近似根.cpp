#include<iostream>
#include<cmath>
using namespace std;

double binary(double a,double b,double m)
{
    while(1)
    {
        double mid=(a+b)/2;
        double y=pow(mid,5)-2*pow(mid,4)+mid*mid-3;
        double ya=pow(a,5)-2*pow(a,4)+a*a-3;
        double yb=pow(b,5)-2*pow(b,4)+b*b-3;
        if(y*ya>0)
        {
            a=mid;
        }
        else
        {
            b=mid;
        }
        if(fabs(y)<m)
        {
        return mid;
        }
    }
}
int main()
{
    double a=0,b=2,y,m;
    cin>>m;
    double x=binary(a,b,m);
    printf("%.8lf",x);
}




