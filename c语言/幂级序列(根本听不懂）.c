//1的1次方，2的2次方一直到10的10次方相加，结果是多少，提示：结果过大用longlong类型
//思路：把每一个式子单独看成一个整体，再分别相加，也就是说单独用循环求和
#include<stdio.h>

int main()
{
    long long sum=0;
    //外循环：依次表示1-10
    for(int i=1;i<=10;i++)
    {
        //内循环：表示外循环的的数字一共要乘几次
        //i=1，乘1次
        //i=2.乘2次
        //表示的1次方，2的2次方一直到10的10次方的每一个式子的单独结果
        long long pow=1;
        for(int j=1;j<=i;j++)
        {
            pow=pow*i;
        }
        sum+=pow; 
    }
    printf("%lld\n",sum);
}