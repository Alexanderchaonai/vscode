#include<iostream>
using namespace std;

void oddAndEven(int n)
{
    int arr[1000]={0};
    int index=0;
    while(n!=1)
    {
        arr[index++]=n;
        if(n%2!=0)
        {
            n=n*3+1;
        }
        else
        {
            n=n/2;
        }
    }
    arr[index]=1;
    for(int j=0;j<=index;j++)
    {
        if(j>0)
        {
            cout<<" ";
            cout<<arr[j];
        }

    }
    cout<<endl;
}

int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        cout<<i<<":";
        oddAndEven(i);
    }
}