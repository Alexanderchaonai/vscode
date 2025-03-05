//我家住在一条短胡同里，这条胡同的门牌号从 1 开始顺序编号。
//若其余各家的门牌号之和减去我家门牌号的两倍，恰好等于 n
//求我家的门牌号及总共有多少家。数据保证有唯一解。
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;;i++)
    {
        sum=sum+i;
        for(int j=1;j<=i;j++)
        if(sum-j*3==n)//通过使用等差数列求和公式，设两个未知数得到这个条件
        {
        cout<<j<<" "<<i<<endl;
        break;
        }
    }

}
//第一层循环：枚举小胡同里面有多少家，设为 i
//第二层循环：枚举你家的编号是多少，设为 j。