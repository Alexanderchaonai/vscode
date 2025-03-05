/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[105]={0};
    int b[105]={0};
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int index=0;
    for(int i=0;i<n;i++)
    {
        bool flag=0;
        for(int j=0;j<=i;j++)
        {
            if(b[i]==a[j])
            {
                flag=1;
                count++;
                break;
            }
        }
        if(flag==0)
        a[index++]=b[i];
    }
    
    cout<<n-count<<endl;
    for(int i=0;i<n-count;i++)
    {
        for(int j=0;j<n-count-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n-count;i++)
    {
        cout<<a[i]<<" ";
    }
}*/
/*模拟题我都不会。。。就是先输入b数组，再将b数组里面的数输入a数组里面，输入的同时要判断之前有没有过相同的数
，因此判断条件是b[i]==a[j]，如果不成立，index再加一，这里的index相当于一个”指针“，指向a的每个索引，如果直
接用j的话就会跳过该索引直接将b输入到下一个位置，所以index是必要的，然后再冒泡排序
*/


//思路2：开一个b数组，里面存放1到1000的数，一开始吧b数组里所有的桶初始化为0，遇见了一个数就把这个桶赋值为1
//，最后遍历b数组，输出所有不为0的数
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num;
    int b[1005]={0};
    int a[1005]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>num;
        b[num]=1;
    }
    int index=0;
    for(int i=1;i<=1000;i++)
    {
        if(b[i]==1)
        {
            a[index]=i;
            index++;
        }
    }
    cout<<index<<endl;
    for(int i=0;i<index;i++)
    {
        for(int j=0;j<index-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<index;i++)
    {
        cout<<a[i]<<" ";
    }
}
//总结：编写这段代码时，我出现的问题
//未注意每次循环遍历的作用，首先要输入10个数，然后将属于这10个数的索引在b数组中赋值为1，然后遍历整个b数组
//因此第二次遍历的截止条件为b数组的索引范围，即1000，然后将b数组中为1的值复制到a数组中，这里注意使用一种
//指针，指向a数组的第一个索引，将这个指针命名为index，然后再排序
