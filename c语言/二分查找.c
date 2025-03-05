/*二分查找
前提条件：数组中的数据必须是有序的
核心逻辑：每次排除一半的查找范围
1.定义min和max表示当前要查找的范围
2.mid是在min和max正中间的
3.如果查找的元素在mid左边，缩小范围时，min不变，max等于mid-1
4.如果查找的元素在mid右边，缩小范围时，max不变，min等于mid+1
每一次循环中，max，mid，min三个值中有两个需要重新赋值
*/
//需求：数组二分查找   在7，23，79，81，103，127，131，147中查找数据
#include<stdio.h>
int binary_search(int arr[],int len,int num);
int main()
{
    int arr[]={7,23,79,81,103,127,131,147};
    int len=sizeof(arr)/sizeof(int);
    //定义一个变量表示要查找的数据
    int num=23;
    //调用函数查找数据
    int index=binary_search(arr,len,num);
    printf("%d\n",index);
}
//利用二分查找去查找数据，函数的返回值就是数据在数组中的索引
//找到了，返回真实的索引
//没有找到，返回-1（习惯，因为不存在-1索引）
int binary_search(int arr[],int len,int num)
{
    int min=0;
    int max=len-1;
    while(min<=max)
    {
        int mid=(min+max)/2;
        if(arr[mid]<num)
        {
             min=mid+1;
        }
        else if(arr[mid]>num)
        {
             max=mid-1;
        }
        else
        {
            return mid;
        }
        if(min>max)
        {
            return -1;
        }
    }
    return 0;
}

//总结：
//1.二分查找优势，提高查找效率，一次就能去掉一半的数据
//2.二分查找前提条件：数据必须是有序的，不能先排序再用二分查找，这样没有意义，索引只能确定当前数字在
//数组中是否存在
//二分查找的过程：
//1.定义min max表示查找范围
//2.mid是min和max正中间的数字