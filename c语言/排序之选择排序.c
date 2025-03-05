//从0索引开始，跟后面的元素一一比较
//小的放前面，大的放后面
//第一轮循环结束后，最小的数据已经确定
//第二轮从1索引开始以此类推
//需求：利用选择排序将下列数据按照从小到大的顺序进行排列：3，5，2，1，4
#include<stdio.h>



//与冒泡排序的区别，以索引为基础进行比较，首先看0索引，再看1索引，一直看到倒数第二个索引
int main()
{
    int arr[]={3,5,2,1,4};
    int len=sizeof(arr)/sizeof(int);
    //利用选择排序
    for(int i=0;i<len-1;i++)
    {
        //i:依次表示数组中的每一个索引
        //第一轮：i=0 j=1 2 3 4
        //第二轮；i=1 j=2 3 4
        for(int j=i+1;j<len;j++)
        {
            //j:依次表示i索引后面的每一个索引
        if(arr[i]>arr[j])
        {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
        }
    }
    for(int i=0;i<len;i++)
    {
        printf("%d\n",arr[i]);
    }
}