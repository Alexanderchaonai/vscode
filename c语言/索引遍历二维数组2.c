//二维数组定义格式2+索引遍历
//核心：事先把所有一维数组定义完毕，再放入到二维数组中
#include<stdio.h>

int main()
{
    int arr1[3]={1,2,3};
    int arr2[5]={1,2,3,4,5};
    int arr3[9]={1,2,3,4,5,6,7,8,9};
    //预先计算每一个数组的长度
    int len1=sizeof(arr1)/sizeof(int);  
    int len2=sizeof(arr2)/sizeof(int);
    int len3=sizeof(arr3)/sizeof(int);
//将预先计算好的长度与每个一维数组在二维数组里面的索引一一对应的存到一个新数组里面，然后在写内循环的终止条件是，j小与的长度就可以随着一维数组的长度而变化
    int lenArr[3]={len1,len2,len3};

    //2.把三个一维数组放到二维数组当中
    //注意：数组的数据类型，跟内部存储的元素类型保持一致
     int* arr[3]={arr1,arr2,arr3};//内部存储的是一维数组的地址
     //一定要注意：这里的arr1，arr2，arr3都是记录的三个一维数组的地址，因此后面写arr[i]表示的只能是首地址而不是数组本身
     for(int i=0;i<3;i++)
     {
        //arr[i]记录的是地址，它本身存储的就是二维数组中第一个一维数组的第一个地址值，是一个指针占8个字节
       // int len=sizeof(arr[i])/sizeof(int);
        for(int j=0;j<lenArr[i];j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
     }
}