#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int n,a[100010],k;
bool judge(int x)//判断二分得到的这个答案满不满足题目条件
{
    long long sum=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]<=x)//如果小于x，说明不需要吹，直接就可以干
            continue;
        else
        {
            sum+=ceil((double)(a[i]-x)/(k-1));//否则说明要吹，把要吹的时间累加到sum里面
        }
    }
    return sum<=x;
}
int main()
{
    cin>>n;
    int l=1,r=0;//左边界和右边界
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];  
        r=max(r,a[i]);
    }
    cin>>k;
    if(k==1)//注意这里要特判k=1的情况，不然k-1作为分母没意义会导致程序崩溃!!!
    {
        cout<<r;//直接输出最长的衣服晾干需要的时间，因为这时候吹风机相当于没用了，因为题目所给的减少k的水是包含晾干的水分的
        return 0;
    }
    while(l<=r)//注意，循环的终止条件有且只有一个，就是l增加到大于r的时候，也就是l=r+1这个时候，这个时候循环终止，这时候得到的答案就是我们需要的最准确的答案
    {
        int mid=(l+r)>>1;
        if(judge(mid))
            r=mid-1;
        else
            l=mid+1;
    }
    cout<<r+1;//注意，这里也可以直接输出l，两者是等价的
    return 0;
}