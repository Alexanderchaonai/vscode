// #include<iostream>
// using namespace std;
// const int N=1e6+10;
// int a[N];
// int main()
// {
//     long long n,c,t;
//     cin>>n>>c;
//     for(int i=1;i<=n;i++)
//     {
//         cin>>a[i];
//     }
//     long long k=n;
//     long long pressure=1e18;
//     int pos=-1;
//     while(k--)
//     {
//         int max=0;
//         if(k>0)
//             max=a[1];
//         for(int i=1;i<=k;i++)
//         {
//             if(max<a[i])
//             {
//                 max=a[i];
//             }
//         }
//         t=max+c*(n-k);
//         if(pressure>t)
//         {
//             pressure=t;
//             pos=k;
//         }
//         if(pressure==t)
//         {
//             if(pos>k)
//             {
//                 pos=k;
//             }
//         }
//     }
//     cout<<pos<<' '<<pressure<<endl;
//     return 0;

#include<iostream>
#include<algorithm>
using namespace std;
const int N=1e6;
int a[N];
long long maxpre[N];
int main()
{
    long long n,c;
    cin>>n>>c;
    maxpre[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i==1)
        {
            maxpre[i]=a[1];
        }
        else
        {
            maxpre[i]=max(maxpre[i-1],(long long)a[i]);
        }
    }
    /*
    递归更新：
我们利用了动态规划的思想，通过已知的前缀最大值 maxpre[i - 1]，更新当前的前缀最大值 maxpre[i]。
效率高：
这种方式可以在 O(n) 的时间内完成对于前缀最大值的计算，而不需要每次都从第一个元素开始遍历到当前位置。
    */
   /*
   为什么只比较两项就能求出前 ( k ) 项最大值？
因为 maxpre[i - 1] 已经包含了前 i - 1 个元素的最大值。
通过比较 maxpre[i - 1] 和当前元素 a[i]，我们就能得到前 i 个元素的最大值。
不需要每次重新遍历前 ( k ) 项：
由于每次只新增了一个元素，我们只需考虑这个新元素是否比之前的最大值更大。
这样可以大幅提高计算效率。
   
   */
    long long minp=-1;
    int pos=-1;
    for(int k=0;k<=n;k++)
    {
        long long t=maxpre[k]+c*(n-k);
        if(minp==-1||t<minp)
        {
            minp=t;
            pos=k;
        }
        else if(t==minp&&k<pos)
        {
            pos=k;
        }
    }
    cout<<pos<<" "<<minp<<endl;
    return 0;
}


//注意这道题，需要通过预处理前缀和最大值来查询，就是先把前k项的最大值存储起来到一个数组里面去，需要用到的时候再去查询，这样时间复杂度就是O(1)，不会超时
//如果直接用双重循环来进行做的话，在每次循环里面都直接求最大值，就是O(n^2)的时间复杂度，这题的题目范围是1e6，这样做肯定不行，因此需要预处理前缀和最大值
