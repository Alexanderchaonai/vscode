// #include<iostream>
// using namespace std;
// int a[1000],n,cnt=0;
// int b[1000];
// void hebin(int l,int mid,int r)//函数传入左端点，右端点
// {
//     int p=l,q=mid+1;//左指针和右指针
//     for(int i=l;i<=r;i++)
//     {
//         if((q>r)||p<=mid&&a[p]<=a[q])//如果右指针超右边界了或者左边小于右边
//         {
//             b[i]=a[p++];
//         }
//         else
//         {
//             b[i]=a[q++];
//             cnt+=mid-p+1;//求逆序对的个数
//         }
//     }
//     for(int i=l;i<=r;i++)
//         a[i]=b[i];
// }
// void merge_sort(int l,int r)
// {
//     if(l==r) return ;
//     int mid=(l+r)/2;
//     merge_sort(l,mid);
//     merge_sort(mid+1,r);
//     hebin(l,mid,r);
// }
// int main()
// {
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     merge_sort(1,n);
//     for(int i=1;i<=n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }




//再写一遍
#include<iostream>
using namespace std;
int a[100],b[100];
void hebin(int l,int mid,int r)
{
    int p=l,q=mid+1;
    for(int i=l;i<=r;i++)
    {
        if(q>r||(p<r)&&a[p]<a[q])
        {
            b[i]=a[p++];;
        }
        else
        {
            b[i]=a[p++];
        }
    }
}

void mergesort(int l,int r)
{
    if(l==r)return ;//忘记了递归的结束条件
    int mid=(l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    hebin(l,mid,r);
}   