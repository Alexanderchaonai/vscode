#include<iostream>
using namespace std;
int main()
{
    double a=1,b=1,c,sum=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;//宗旨：让原来小的数变大，就把大的赋给小的
        sum=sum+b/a;
    }
    printf("%.4lf",sum);
}