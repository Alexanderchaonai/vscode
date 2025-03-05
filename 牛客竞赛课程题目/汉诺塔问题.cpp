#include<iostream>
using namespace std;
int n,cnt=0;
void move(int n,char start,char towards,char zhong)
{
    if(n==0)return ;
    move(n-1,start,zhong,towards);//先移动前n-1个
    printf("move No.%d from %c to %c\n",n,start,towards);
    cnt++;
    move(n-1,zhong,towards,start);//再把前n-1个移回来
}
int main()
{
    cin>>n;
    move(n,'A','C','B');
    cout<<"移动了"<<cnt<<"次";
}