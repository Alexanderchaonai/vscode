//数组作为函数的形参该如何传递
//数组的索引越界
//最小索引：0
//最大索引：长度-1
#include<stdio.h>
void printArr(int *arr,int len);

int main()
{
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(int);//len表示数组里数据的个数，拿字节总长度除以一个数据所占的字节长度
    printArr(arr,len);
    
}
void printArr(int *arr,int len)
//数组作为函数的参数，要注意什么
//实际上传递的是数组的首地址，如果要在函数中对数组进行遍历的话，记得一定要把数组的长度一起传递过去
//定义处：arr表示的就是完整的数组
//函数中的arr：只是一个变量，用来记录数组的首地址
{
    printf("%zu\n",sizeof(arr));//一个字节占8个bit位置，在64位操作系统中，是以64个bit为表示内存地址值
    for(int i=0;i<len;i++)
    {
        printf("%d\n",arr[i]);
    }
}
//注意:这里定义新函数时括号里的内容肯定为形参，但是形参不能作为一个具体的数而存在，所以括号里实际的内容并不是数组本身
//，这个数组名被当作指向数组首元素的指针来处理。