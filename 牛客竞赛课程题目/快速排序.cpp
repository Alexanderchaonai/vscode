#include<iostream>
using namespace std;
int a[1000];
// void quicksort(int l,int r)
// {
//     int i=l,j=r;//i为左指针，j为右指针
//     int mid=(l+r)/2;
//     int x=a[mid];//这里的基准可以取数组里的任意一个元素
//     while(i<=j)//当两个指针还没有交叉的时候
//     {
//         while(a[i]<x)//在左边找到第一个大于基准的元素
//             i++;
//         while(a[j]>x)//在右边找到最后一个小于基准的元素
//             j++;
//         if(i<=j)//如果找到的两个元素没重合，就把他俩交换一下
//         {
//             swap(a[i],a[j]);
//             i++,j--;//交换完之后，各自两个指针都其实都移动了，
//         }
//     }//这个循环执行完，就成功的把小于这个基准的数都排在了左边，大于基准的数都排在了右边
//     if(l<j)quicksort(l,j);//递归对最左区间再排序
//     if(i<r)quicksort(i,r);//递归对右区间再排序
// }

int finding(int l,int r,int k)
{
    if(l==r)return a[l];
    int i=l,j=r;
    int mid=(l+r)/2;
    int x=a[mid];
    while(i<=j)
    {
        while(a[i]<x)i++;
        while(a[j]>x)j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++,j--;
        }
    }
        //接下来判断第k小的数到底在哪个区间，如果
        if(k<=j)return finding(l,j,k);//判断第k小的数
        else if(i<=k)return finding(i,r,k);
        else return a[k]; 
}