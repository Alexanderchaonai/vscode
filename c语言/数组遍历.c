//数组遍历：依次获取数组中的每一个元素
#include<stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};

    for(int i=0;i<5;i++)
    {
        //i：依次表示数组里的每一个索引
        printf("%d\n",arr[i]);
    }
}