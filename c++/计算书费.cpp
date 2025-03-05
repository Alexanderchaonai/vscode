#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int n;
    double arr[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
    double arr2[10]={10};
    for(int i=0;i<10;i++)
    {
        cin>>n;
        arr2[i]=n;
    }
    double sum=0;
    for(int i=0;i<10;i++)
    {
        sum=sum+arr[i]*arr2[i];
    }
    printf("%.1lf",sum);
}