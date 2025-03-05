#include<stdio.h>

//使用指针遍历数组
int main()
{
    int arr[]={10,20,30,40,50};
    int len=sizeof(arr)/sizeof(int);
    //1.获取数组的指针
    //实际上获取的数组的首地址
    int* p1=arr;
    //也可以这么些：  int* p1=&arr[0];
    printf("%d\n",*p1);
    printf("%d\n",*(p1+1));
    //利用循环和指针遍历数组获取里面的每一个元素
    for(int i=0;i<len;i++)
    {
        printf("%d\n",*(p1++));
    }
}