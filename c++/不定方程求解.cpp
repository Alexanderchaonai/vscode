/*给定正整数 
求不定方程 
ax+by=c 关于未知数 
x 和 y 的所有非负整数解组数。
输入格式
一行，包含三个正整数 
a，
b，
c，两个整数之间用单个空格隔开。每个数均不大于 
1000。
输出格式
一个整数，即不定方程的非负整数解组数。
*/
#include<iostream>
using namespace std;
int main()
{
    //枚举其中一个未知数x ,上限是a/c，再用其表达另外一个未知数在进行判断
    int a,b,c;
    cin>>a>>b>>c;
    int x,y;
    int count=0;
    for( x=0;x<c/a;x++)
    {
        y=(c-a*x)/b;
        if(a*x+b*y==c)
        {
            count++;
        }
    }
    cout<<count<<endl;
}