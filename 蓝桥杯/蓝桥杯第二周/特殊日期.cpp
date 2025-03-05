/*蒟蒻借鉴了大佬做法，关键是要理清遍历的思路，分块首先定义一个函数求每个位数加起来的和，然后循环判断，
从1900年开始判断，里面嵌套月份和天数，注意可以使用数组索引来对应一年的12个月份，最里面的循环是用来判断和
是否相等的，最终是要具体循环遍历到每一天判断是否相等，因此是个三重循环，第二层输入月份，第三层输入天数，
同时因为每个月对应的天数不一样，提前存好每个月份的天数再用数组索引一一对应会方便很多，而不用加很恐怖的判断
了，这点要记住，尤其是在处理日期问题是是很好用的
*/

#include<iostream>
using namespace std;

int sum(int n)
{
    int sum=0;
    while(n!=0)
    {
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    return sum;
}


int main()
{
    int count=0;
    int year,month,day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(year=1900;year<=9999;year++)
    {
        if(year%4==0&&year%100!=0||year%400==0)
        day[2]=29;
        else
        day[2]=28;
        for(int i=1;i<=12;i++)
        {
            for(int j=1;j<=day[i];j++)
            {
                if(sum(year)==sum(i)+sum(j))
                count++;
            }
        }
    }
        cout<<count;
}