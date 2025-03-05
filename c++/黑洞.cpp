#include<iostream>
#include<algorithm>
using namespace std;

void reArrange(int N,int &a,int &b)
{
    int arr[4]={0};
    for(int i=0;i<4;i++)
    {
        int digits=N%10;
        arr[i]=digits;
        N=N/10;
    }
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4-1-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int maxNumber=arr[0]*1000+arr[1]*100+arr[2]*10+arr[3];
    reverse(arr,arr+4);
    /*for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4-1-i;j++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }*/
    int minNumber=arr[0]*1000+arr[1]*100+arr[2]*10+arr[3];
    a=maxNumber;
    b=minNumber;
    printf("%d-%d=%d\n",a,b,a-b);
}

int main()
{
    int N;
    cin>>N;
    int a=0,b=0;
    for(int i=1;i<=7;i++)
    {
        reArrange(N,a,b);
        N=a-b;
        if(a-b==6174)
        {
            break;
        }
    }
}







