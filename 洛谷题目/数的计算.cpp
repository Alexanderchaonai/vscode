#include<iostream>
#include<cmath>
using namespace std;

int cnt=0;
char str[100010];

void show(int n)
{
    int a=0,b=0;    
    for(int i=0;i<cnt;i++)
    {
        if(str[i]=='W')a++;
        if(str[i]=='L')b++;
        if((a>=n||b>=n)&&fabs(a-b)>=2)
        {
            cout<<a<<":"<<b<<endl;
            a=0,b=0;
        }
    }
    cout<<a<<":"<<b<<endl;
}
int main()
{
    char ch;
    while(cin>>ch&&ch!='E')
    {
        if(ch=='W'||ch=='L')
            str[cnt++]=ch;
    }
    show(11);
    cout<<endl;
    show(21);
}