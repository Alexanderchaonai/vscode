/*
#include<stdio.h>

int main()
{
    int t;//测试数据数
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        for(int a=1;a<=2;a++)
        {
            int n;//木棍数目
            scanf("%d",&n);
            if(n==1||n==2)
            {
                printf("no");
            }
            else
            {
            int arr[n];
            int sum=0;
            for(int j=0;j<n;j++)
            {
                int len;//第几根木棍长度
                scanf("%d",&len);
                arr[j]=len;
                sum=sum+arr[j];
            }
            }
        }
    }
}*/


#include<stdio.h>

int contains(int arr[],int len,int num);
int main()
{
    int arr[100];
    int len=sizeof(arr)/sizeof(int);
    int n;//木棍数目
    scanf("%d",&n);
    if(n==1||n==2)
    {
        printf("no");
    }
    for(int i=0;i<n;i++)
    {
        int lenth;
        scanf("%d",&lenth);
        arr[i]=lenth;
    }
    int arr2[100];
    int count=0;
    for(int i=0;i<n;)
    {
        int temp=arr[i];
        int flag=(arr,len,temp);
        if(flag==1)
        {
            arr2[i]=arr[i];
            i++;
            count++;
        }
    }
}



int contains(int arr[],int len,int num)
{
    for(int i=0;i<len;i++)
    {
        if(arr[i]==num)
        {
            return 1;
        }
    }
    return 0;
}



