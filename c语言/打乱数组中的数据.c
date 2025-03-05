//需求：定义一个数组，存入1~5，要求打乱数组里所有的数据
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int arr[5]={};
    int len=sizeof(arr)/sizeof(int);
    for(int i=0;i<len;i++)
    {
        printf("请输入一个数字：");
        scanf("%d",&arr[i]);
    }
    //2.遍历数组，得到每一个元素，让这个元素跟随机索引处的元素进行交换
    srand(time(NULL));
    for(int i=0;i<len;i++)
    {
    //获取一个随机索引0~4
    int index=rand()%len;
    //拿着获取的index指向的元素，与i指向的元素进行交换
    int temp=arr[index];
    arr[index]=arr[i];
    arr[i]=temp;
    }
    for(int i=0;i<len;i++)
    {
        printf("%d\n",arr[i]);
    }
}