#include<iostream>
using namespace std;

    int sum=0;
int number(int n)
{
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    if(sum/10)//如果不是一位数，就继续求这个数 各个位上的和 
    {
        return number(sum);
    }
    return sum;
}

int main()
{
    string s,a;
    getline(cin,s);
    int i,sum=0;
    for(i=0;s[i];i++)
    {
        a[i]=s[i]-'0';//字符转数字 
        sum+=a[i];//将各个位上的数字加起来 
    }
    printf("%d",number(sum));
    return 0;
}
