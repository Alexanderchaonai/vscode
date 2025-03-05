#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int t,n,s;
int a[100000];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        memset(a,0,sizeof(a));//注意每次都要初始化a数组
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int len=n+1;
        int sum=0;
        int r=0;
        for(int l=1;l<=n;l++)//枚举左边界
        {
            while(r<=n&&sum<s)//枚举右边界
            {
                r++;
                sum+=a[r];
            }
            if(sum>=s)
            {
                len=min(len,r-l+1);
            }
            sum-=a[l];//一个左边界枚举完之后，a[l]就会被移除下一次循环，因此sum的值要减去a[l]
        }
        if(len>n)
        cout<<"0\n";
        else
        cout<<len<<endl;
    }
}
//总结：当sum>s的时候，r就没有继续往后移的必要了，而是直接移动下一次左边界
//当开始移动下一次左边界的时候，r也没有往回移的必要了，而是继续向右移-----------------最重要的一点



//虽然这题是双重循环，但是对于l和r来说，他们一直都是在向右移的而没有往回移动过，因此l和r都只是经过了一次从
//1到n，因此时间复杂度为O(n)，而对于普遍的双重循环，内外都是会往回再次遍历一遍的，因此时间复杂度才是O(n2)



//方法：双指针法，追逐法，尺取法



//确定思路，由简入繁，找到模拟，确定意义（每个变量的意义，尤其是循环变量），分析过程，拓至普遍