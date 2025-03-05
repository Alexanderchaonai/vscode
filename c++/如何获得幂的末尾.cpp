#include<iostream>
#include<cmath>
using namespace std;
//1.暴力求解
/*int main()
{
    int a,b;
    cin>>a>>b;
    long long c=pow(a,b);
    int arr[3]={0};
    for(int i=0;i<3;i++)
    {
        int digit=c%10;
        arr[2-i]=digit;
        c=c/10;
    }
    for(int i=0;i<3;i++)
    {
        cout<<arr[i];
    }
}*/

//通解：只想要最后三位，因此每次都可以直接取模1000获得每次乘完的数的后三位，对于其他位数的也通用
int main()
{
    int a,b;
    cin>>a>>b;
    //把ans设为1，表示a的0次
    int ans=1;
    for(int i=0;i<=b;i++)
    {
        //i要从1~b，表示a的b次
        ans=ans*a;
        ans=ans%1000;
    }
    if(ans<10)
    {
        cout<<"00"<<ans;
    }
    else if(ans<100&&ans>=10)
    {
        cout<<"0"<<ans;
    }
    else
    cout<<ans;
}

//快速幂算法（但是不会）