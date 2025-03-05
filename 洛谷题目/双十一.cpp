#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int sum=0;
    for(int i=1900;i<x;i++)
    {
        if((i%4==0&&i%100!=0)||i%400==0)
            sum=sum+366;
        else
        sum=sum+365;
    }
    int cnt=0;
    for(int i=x;i<=y;i++)
    {
        if((i%4==0&&i%100!=0)||i%400==0)
        {
            days[2]=29;
        }
        else
        {
            days[2]=28;
        }
        int daycount=0;
        for(int month=1;month<11;month++)
        {
            daycount+=days[month];
        }
        daycount+=11;
        sum+=daycount;   
        if(sum%7==6||sum%7==0)
        cnt++;
         // **注意**：需要将当年 11 月 11 日之后的天数加回 sum，以便下次循环时准确
        sum += (days[11] - 11); // 加上 11 月剩余的天数
        sum += days[12];        // 加上 12 月的天数
    }
        cout<<cnt;
}