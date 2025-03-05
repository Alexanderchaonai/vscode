/*给定若干个四位数，求出其中满足以下条件的数的个数：个位数上的数字减去千位数上的数字，再减去百位数
上的数字，再减去十位数上的数字的结果大于零。
输入格式
输入为两行，第一行为四位数的个数 n，第二行为 n 个的四位数。(n≤100)
输出格式
输出为一行，包含一个整数，表示满足条件的四位数的个数。
*/
#include<iostream>
using namespace std;

bool istrue(int n)
{
    int count=0;
    int arr[4]={0};
    for(int i=1;i<4;i++)
    {
        int digit=n%10;
        arr[count++]=digit;//0索引存的是个位
        n=n/10;
    }
    /*for(int count=3;count>=0;count--)
    {
        int temp=arr[count]-arr[count-1];
        cout<<arr[count]<<" ";
    }*///想遍历数组用循环输出最终的num但是还是不太会，等我学了动态分配数组再回来写
    int number=arr[3]-arr[2]-arr[1]-arr[0];
    if(number>0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    int num;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        cin>>num;
        if(istrue(num))
        {
            count++;
        }
    }
    cout<<count;
}