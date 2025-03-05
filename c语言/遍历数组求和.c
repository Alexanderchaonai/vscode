//需求：生成10个个1-100之间的随机数存入数组，并求出所有数据的和
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    //定义一个数组并将其初始化
    int arr[10]={0};
    int sum=0;
    int len=sizeof(arr)/sizeof(int);
    srand(time(NULL));
    for(int i=0;i<len;i++)
    {
        //获取随机数
        int num=rand()%100+1;
        //将获取的随机数赋值给数组中的位置
        arr[i]=num;
    }
    //利用累加思想求数组中所有数据的和
    for(int i=0;i<len;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d\n",sum);
    return 0;
    }