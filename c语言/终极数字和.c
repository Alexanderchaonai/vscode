/*输入一个正整数N（long long型范围内），假设N中的所有数字的和是M，如果M大于9，再求出M的所有数字之和，重复这个过程，直到数字和为1位数，输出这个终极数字和。

输入样例:
123456789
输出样例:
9
*/
#include<stdio.h>

long long printSum(long long N);
int main()
{
    long long N;
    scanf("%lld",&N);
    int sum=printSum(N);
    while(sum>9)
    {
        sum=printSum(sum);
    }
    printf("%d",sum);
}
    long long printSum(long long N)
    {
        int sum=0;
            while(N!=0)
            {
                int temp=N%10;
                sum=sum+temp;
                N=N/10;
            }
            return sum;
    }