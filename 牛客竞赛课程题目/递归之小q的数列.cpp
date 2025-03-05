#include<iostream>
using namespace std;

long long f(long long n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return f(n/2)+n%2;//注意：这里写递归的时候不要再写f(n%2)，不然会超时，因为已经知道了0和1时对应的函数值各自是相等的
}
int main()
{
    int t;
    long long n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int x=f(n);
        printf("%d %lld\n",x,(1LL<<x)-1);//注意，这里使用位运算的操作，我们可以简化题目的意思，举个栗子
    }
    return 0;
}