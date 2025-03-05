#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    for(int i=1901;i<=2000;i++)
    {
        if(i%4==0&&i%100!=0||i%400==0)
        sum++;
    }
    sum=(365*100+sum);
    printf("%d",sum/7);
}