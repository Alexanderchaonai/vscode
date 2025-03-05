#include<iostream>
using namespace std;

int number(int num)
{
    int count=0;
    while(num)
    {
        int digit=num%10;
        if(digit==2)
        {
            count++;
        }
        num/=10;
    }
    return count;
}

int main()
{
    int sum=0;
    for(int i=1;i<=2020;i++)
    {
        if(number(i)!=0)
        {
            int temp=number(i);
            sum=sum+temp;
        }
    }
    cout<<sum<<endl;
}