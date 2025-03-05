#include<iostream>
using namespace std;
int main()
{
    int l,m;
    cin>>l>>m;
    int u,v;
    int a[10005]={0};
    int ans=0;
    for(int i=0;i<=l;i++)
    {
        a[i]=i;
    }
    while(m--)
    {
        cin>>u>>v;
        for(int i=u;i<=v;i++)
        {
            a[i]=-1;
        }
    }
    for(int i=0;i<=l;i++)
    {
        if(a[i]!=-1)
        ans++;
    }
    cout<<ans<<endl;
}

//这题不要一味的跟着题目的思路走，非要把三个区间里面的树全都“算”出来，实际上我们可以让计算机去数，将每一棵树
//都进行编号，然后遍历给定的区间，将遍历到的数赋值为-1，就算有重复无非也就是重新赋值了一遍，然后再输出a数组里
//所有不等于-1的数


//注意：这题的题目条件有点坑，不是l的长度就是l棵数，数本身就是从0开始数的，因此是l+1棵数，所以循环时一定要
//注意截止条件