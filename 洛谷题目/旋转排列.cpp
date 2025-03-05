#include<iostream>
using namespace std;
int a[2005];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(1)
    {
        int last=a[n-1];
        for(int i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=last;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        if(a[n-1]==n)
        {
            break;
        }
        else
        continue;
    }
}
//在旋转移动数组里面元素的时候，注意一定要倒序移动，如果正序移动就会覆盖原有的值
// 但是，由于正序遍历，在移动过程中，元素会被覆盖，导致数据丢失。
// 具体来说，a[i+1] = a[i]; 会将位置 i+1 的元素覆盖为位置 i 的值。
// 当 i 增加时，a[i] 已经是被修改过的值，无法保留原始数据。