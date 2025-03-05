#include<iostream>
using namespace std;


bool isLeapYear(int year)
{
    return (year%400==0)||((year%4==0)&&(year%100!=0));
}
int main()
{
    int begin,end;
    int year,month,day;
    cin>>begin>>end;
    int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int cnt=0;
    for(int i=begin;i<=end;i++)
    {
        int reverse=0;
        int temp=i;
        while(temp)
        {
            int digit=temp%10;
            reverse=reverse*10+digit;
            temp/=10;
        }
        if(reverse==i)
        {
            year=i/10000;
            month=(i%10000)/100;//month=(i/100)%100
            day=i%100;
            if(month>=1&&month<=12&&day>0)
            {
                int maxday=days[month];
                if(month==2&&isLeapYear(year))
                {
                    maxday=29;
                }
                if(day<=maxday)
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
//这题需要注意的点就是，我们可以直接遍历整个范围，然后依次判断每个日期是否合法即可