/*对于一个数组，其连续的相同段叫做一个平台，例如，在1,2,2,3,3,3,4,5,5,6中
1，2-2，3-3-3，4，5-5，6都是平台。
编写一个程序，接收一个数组，找出最长的平台。在上面的例子中 
3−3−3 就是最长的平台。
*/
#include<iostream>
using namespace std;
int main()
{
    int f[2000]={0};
    int n,k;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>k;
        f[k]++;
    }
    int max=0;
    for(int i=0;i<=2000;i++)
    {
        if(f[i]>max)
        max=f[i];
    }
    cout<<max;
}