#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    for(int i=100;i<1000;i++)
    {
        int sum=0;
        int original_i=i;
        int temp2=i;

        for(int j=1;j<4;j++)
        {
            int temp=temp2%10;
            sum=sum+pow(temp,3);
            temp2=temp2/10;
        }
        if(sum==original_i)
        {
            cout<<"该三位数为"<<original_i<<"水仙花数"<<endl;
        }
    }
}
//注意：内部循环中若要求目前三位数是否为水仙花数提取位数时，不要直接提取，而是在外层循环里面先用一个
//新的变量储存i的值，再在内层循环里面获取每个位数，因为这里i的值不仅代表每个不同的三位数，也代表着循环
//次数