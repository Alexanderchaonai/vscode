#include<stdio.h>

void chooseSort(int arr[],int N)
{
    for(int i=0;i<N-1;i++)
    {

        for(int j=i+1;j<N;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
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
    int N;
    scanf("%d",&N);
    int arr[100]={0};
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    chooseSort(arr,N);
}