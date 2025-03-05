//定义一个函数，求数组的最大值和最小值，并进行返回
//作用2：返回多个变量
#include<stdio.h>

void getMaxandMin(int* arr,int len,int*max,int* min);

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(int);
    int max=arr[0];
    int min=arr[0];
    getMaxandMin(arr,len,&max,&min);
    printf("数组的最大值为%d\n",max);
    printf("数组的最小值为%d\n",min);
}

void getMaxandMin(int* arr,int len,int* max,int* min)//这里的int* max和int* min都是指传递的是指针变量
{
    *max=arr[0];;
    for(int i=1;i<len;i++)
    {
        if(arr[i]>*max)//这里的*max指的是解引用符，将传递过来的max地址解引用为里面的数据再与数组的值进行比较
        {
           *max=arr[i];
        }
    }

    for(int i=1;i<len;i++)
    {
    if(arr[i]<*min)
    {
        *min=arr[i];
    }
    }
}