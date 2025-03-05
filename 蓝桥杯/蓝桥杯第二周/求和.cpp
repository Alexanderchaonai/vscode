#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    for(int i=1;i<=2019;i++)
    {
        int temp=i;
        while(temp!=0)
        {
            int digit=temp%10;
            if(digit==1||digit==0||digit==2||digit==9)
            {
                sum=sum+i;
                break;
            }
            temp=temp/10;
        }
    }
    cout<<sum;
}