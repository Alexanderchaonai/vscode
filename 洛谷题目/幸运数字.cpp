#include<iostream>
#define ll long long
using namespace std;

ll luck(ll digit) 
{
    digit *= 7;
    while (digit > 9) {
        ll sum = 0;
        while (digit) 
        {
            sum += digit % 10;
            digit /= 10;
        }
        digit = sum;
    }
    return digit;
}

ll sumofDigit(ll num)
{
    ll sum=0;
    while(num)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int main()
{
    ll n,num;
    cin>>n;
    while(n--)
    {
        cin>>num;
        ll temp=num;
        ll res=0;
        ll cnt=1; 
        ll factor=1;
        while(temp)
        {
            ll digit=temp%10;
            if(cnt%2==1)
            {
                digit=luck(digit);
            }
            res=digit*factor+res;//这里是如何将获取的每一位数字再次直接拼接回来=原数字的方法，用一个factor变量跟踪次数，每次factor都乘10再加上上次获取的res
            factor*=10;
            temp/=10;
            cnt++;
        }
        ll sum=sumofDigit(res);
        if(sum%8==0)
            cout<<"T"<<endl;
        else 
            cout<<"F"<<endl;
    }
}