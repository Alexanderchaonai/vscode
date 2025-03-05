// 题目：单细胞细菌采用细胞分裂的方式进行繁殖，设某一时刻有n个细菌，一代后会分裂为2n个，再一代后会分裂为4n个，以此
// 类推。同时，每个细菌繁殖m代后会死亡。试编写程序，由用户输入初始细菌数n，单个细菌繁殖代数m，求经过x代后，总
// 共有多少个细菌。
#include<stdio.h>
// 用于存储每一代的细菌数量
int bacteria[1000];
int main()
{
    int n,m,x;
    scanf("%d %d %d",&n,&m,&x);
    bacteria[0]=n;// 初始细菌数

    // 模拟细菌繁殖和死亡过程
    for(int i=1;i<=x;i++)
    {
        // 计算当前代的细菌数量
        for(int j=m;j>0;j--)//计算第m代细菌的数量，把数组里的值都往后挪一个位置，记得要从后往前遍历，不然会覆盖原来的值
        {
            bacteria[j]=bacteria[j-1];
        }
        bacteria[0]*=2;// 新的一代细菌数量初始化为0
         // 计算新的一代细菌数量
        for(int j=1;j<=m;j++)
        {
            bacteria[0]+=bacteria[j];
        }
        bacteria[0] *= 2; // 每一代细菌数量是前一代的两倍
    }
    long long sum=0;
    for(int i=0;i<=m;i++)
    {
        sum+=bacteria[i];
    }
    printf("%lld",sum);
    return 0;
}