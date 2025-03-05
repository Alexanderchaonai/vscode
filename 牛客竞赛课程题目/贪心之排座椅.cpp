#include<iostream>
#include<algorithm>
using namespace std;
int m,n,k,l,d;
//m行  n列   k为横向通道   l为纵向通道   d对同学

struct ty
{
    int pos,num;
    //pos存的是每一行的位置
    //num存的是数量，表示在该行或该列上设置通道可以阻止的交头接耳的对数
}hang[1200],lie[1200];

bool comp2(ty a,ty b)
{
    if(a.num!=b.num)
    return a.num>b.num;// 按照阻止对数从大到小排序
    else
    return a.pos<b.pos;// 如果阻止对数相同，按位置从小到大排序
}

int main()
{
    cin>>m>>n>>k>>l>>d;
    for(int i=1;i<=m;i++)
    {
        hang[i].pos=i;
        hang[i].num=0;
    }
    for(int i=1;i<=n;i++)
    {
        lie[i].pos=i;
        lie[i].num=0;
    }
    //遍历每一对可能交头接耳的同学，根据他们的位置，更新对应的行或列的 num 值。
    int x,y,p,q;
    //为了找出可以最大程度减少交头接耳的行和列，我们需要根据 num 值对 hang 和 lie 进行排序。
    for(int i=1;i<=d;i++)
    {
        cin>>x>>y>>p>>q;
        if(x==p)// 同一行，说明是左右相邻，需要更新列信息
            lie[min(y,p)].num++;// 更新对应列的阻止对数
        else
            hang[min(x,q)].num++;
    }
    // 对行和列进行排序
    sort(hang+1,hang+1+m,comp2);
    sort(lie+1,lie+1+n,comp2);

    //排序完成后，我们从排序后的数组中选择前 k 个行和前 l 个列，作为需要设置通道的位置。
    int reshang[1005];
    for(int i=1;i<=k;i++)
    {
        reshang[i]=hang[i].pos;
    }

    int reslie[1005];
    for(int i=1;i<=l;i++)
    {       
        reslie[i]=lie[i].pos;
    }
    // 对结果进行排序，方便按升序输出
    sort(reshang+1,reshang+k+1);
    sort(reslie+1,reslie+l+1);

    for(int i=1;i<=k;i++)
    {
        cout<<reshang[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=l;i++)
    {
        cout<<reslie[i]<<" ";
    }
}