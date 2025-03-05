#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1005]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=1,count=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        count++;
        else
        {
            if(count>max)
            {
            max=count;
            }
            count=1;
        }
    }
    if(count>max)//比如 10 12 15 5 7 9 10，遍历到15的时候，max更新为3然后count被重置为1，然后继续从
    //从5再开始遍历，5，7，9，10，当i=n-1时，count++到4，但是此时循环截止了，max的值未被更新为count
    //因此此时max为3但是最大递增长度其实是4，因此循环结束后还需要要在判断一次max和count
    max=count;
    cout<<max;
}