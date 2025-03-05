//NOIP2010
/*设置一个数组vis用来记录当前数据num是否在内存空间中，如果在则vis[num]=1，否则为0
设置一个数组a来存放文章的单词，即后输入的n个数字；
当输入文章单词的时候首先判断它在不在内存中，即vis[num]是否为1
（1）如果在，则跳出当前循环，进入下一次循环，即读取文章的下一个单词
（2）如果不在，则判断内存空间是否满；如果满，则将当前内存中最早输入的数据置为0，即vis[a[currentsize-m]]=0;
将新数据插入到vis和a中。
*/
#include<iostream>
using namespace std;
int main()
{
    int m,n,x;
    cin>>m>>n;
    int a[1005]={0};
    bool vis[1005]={0};
    int count=0;
    int current_size=0;
    for(int i=1;i<=n;i++)
    {
        cin>>x;// 读取单词
        if(vis[x]==1)//如果出现过就不查，跳过这次循环
        continue;
        else
        {   a[current_size++]=x;// 将新单词存入内存
            vis[x]=1;// 标记单词在内存中
            count++;// 查词典次数加1
        }
        if(current_size>m)//此时等于m+1
        {
            vis[a[current_size-m-1]]=0;// 去标记化：清空最早进入内存的单词
        }
    }
    cout<<count;
}

//为什么这题要把x存入一个a数组中
/*记录单词的顺序：

a 数组用于记录单词进入内存的顺序。这样，当内存满了需要清空最早进入内存的单词时，我们可以通过 a 数组找到这个单词。
管理内存中的单词：

当内存中的单词数超过 M 时，我们需要清空最早进入内存的单词。通过 a 数组，我们可以知道哪个单词是最早进入内存的，
从而将其清空。
*/