#include<iostream>
#include<climits>
using namespace std;
/*
题目描述
输出一个整数数列中不与最大数相同的数字之和。
*/
/*int main()
{
    int N;
    cin>>N;
    int num;
    int arr[100]={0};
    int sum=0;
    for(int i=0;i<N;i++)
    {
        cin>>num;
        sum=sum+num;
        arr[i]=num;
    }
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-1-i;j++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int max=arr[N-1];
    int sum2=sum-max;
    cout<<sum2<<endl;

}*/


int main()
{
    int N;
    cin>>N;
    int MAX_NUM=-1e9;
    int arr[100]={0};
    int sum=0,num;
    for(int i=0;i<N;i++)
    {
        cin>>num;
        if(num>MAX_NUM)
        MAX_NUM=num;
        sum=sum+num;
    }
    cout<<sum-MAX_NUM<<endl;
}


