#include<iostream>
#include<limits>
#include<cmath>
using namespace std;
int main()
{
    double s,p1,p2,p3,p4;
    cin>>s;
    int cnt=0;
    for(double p1=0.00;p1<=1.00;p1+=0.01)
    {
        for(double p2=0.00;p2<=1.00;p2+=0.01)
        {
            for(double p3=0.00;p3<=1.00;p3+=0.01)
            {
                for(double p4=0.00;p4<=1.00;p4+=0.01)
                {
                    if(fabs((1-p1)*(1-p2)*(1-p3)*(1-p4)-s)<1e-8)
                    {
                        cnt++;
                    }
                }
            }
        }
    }
    cout<<cnt;
}
//注意，在处理高精度的小数时，直接判断两个浮点数相等会有较大误差，因此我们直接定义一个满足题目要求的很小的量
//用来代替直接判断两个数是否相等即可