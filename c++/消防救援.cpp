#include<iostream>
#include<cmath>
using namespace std;

double Time(double d1,double d2,double num)
{
    double time1=num*1.5;
    double time=0;
    time=2.0*sqrt(d1*d1+d2*d2)/50;
    time=time+time1;
    return time;
}

double ceil_num(double num)
{
    int part=(int)num;
    if(num>(int)num)
    {
        return (int)num+1;
    }
    else
    return num;
}
int main()
{
    int n;
    cin>>n;
    int d1,d2,num;
    double totalSum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>d1>>d2>>num;
        double time=Time(d1,d2,num);
        totalSum=time+totalSum;
    }
    cout<<ceil_num(totalSum)<<endl;
}