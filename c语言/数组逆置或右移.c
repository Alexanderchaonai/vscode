#include<stdio.h>

void reverseArr(int arr[],int N)
{
    int i=0;
    int j=N-1;
    
    for(int i=0;i<j;)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

void changeArr(int arr[], int N ,int M)
{
    //定义两个数组这样写，但是有问题，不知道哪里有问题
    /*int arr2[]={0};
    for(int i=1;i<=M;i++)
    {
        arr2[0]=arr[N-1];
    for(int i=0;i<N-1;i++)
    {
        arr2[i+1]=arr[i];
    }
    for(int i=0;i<N;i++)
    {
        arr[i]=arr2[i];
    }
    }
    for(int i=0;i<N;i++)
    {
        printf("%d",arr[i]);
    }*/
   for(int i=1;i<=M;i++)
   {
    int temp=arr[N-1];
        for(int i=N-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
    arr[0]=temp;
   }
   for(int i=0;i<N;i++)
   {
    if(i==0)
    {
        printf("%d",arr[i]);
    }
    else
        printf(" %d",arr[i]);
   }
}

int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int arr[100]={0};
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }

    if(M==0)
    {
        reverseArr(arr,N);
        for(int i=0;i<N;i++)
        {
            if(i==0)
            {
                printf("%d",arr[i]);
            }
            else
            printf(" %d",arr[i]);
        }
    }
    else if(M>0)
    {
        changeArr(arr,N,M);

    }
}