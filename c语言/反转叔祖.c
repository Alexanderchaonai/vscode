//需求：键盘录入5个数据并存入数组，完成以下要求
//1，遍历数组 2.反转数组 3.再次遍历
#include<stdio.h>

void printArr(int arr[] ,int len)
{
    for(int i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    /*
    a[n],b[n]
    for(int i=0;i<n;i++)
        b[n-1-i]=a[i];
    
    */
    int arr[5]={};
    int len=sizeof(arr)/sizeof(int);
    for (int i=0;i<len;i++)
    {
        printf("请输入一个数字:");
        scanf("%d",&arr[i]);
    }
    printArr(arr,len);
    int i=0;
    int j=len-1;
    for(int i=0;i<j;)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    printArr(arr,len);

}
