#include<iostream>
using namespace std;
int main()
{
    int n,num;
    cin>>n;
    int arr[20000]={0};
    int f[100]={0};
    for(int i=0;i<n;i++)
    {
        cin>>num;
        arr[i]=num;
        if(f[num]==0)
        {
        f[num]++;
        cout<<num<<" ";
        }
    }
    /*
    for(int i=0;i<n;i++)
    {
        if(f[i+1]==1)
        printf("%d ",arr[i]);
    }*/
}
//题目：输入n个整数，若重复则只输出一次