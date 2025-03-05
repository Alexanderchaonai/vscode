#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int i=1;
    while(count<2021)
    {
        int temp=i;
        while(temp)
        {
            int digit=temp%10;
            if(digit==1)
            {
                count++;
            }
            temp/=10;
            if(count==2021)
            {
            cout<<i;   
            break;
            }
        }
        i++;
    }
}