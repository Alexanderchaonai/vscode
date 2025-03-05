#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double num;
    double arr[300]={0};
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        sum=sum+num;
        arr[i]=num;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                double temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    /*for(int i=0;i<n;i++)
    {
        printf("%.2lf ",arr[i]);
    }*/
    double max=arr[n-1];
    double min=arr[0];
    double aver=(sum-max-min)/(n-2);
    printf("%.2lf ",aver);
    double maxnum=1e-9;
    for(int i=1;i<n-1;i++)
    {
        if(maxnum<fabs(arr[i]-aver))
        maxnum=fabs(arr[i]-aver);
    }
    printf("%.2lf",maxnum);
}