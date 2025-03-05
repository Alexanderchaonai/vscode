//找出0~1000之内，符合要求的数字
//要求：每一位的数字之和等于15
//举例：78，168，1167
//思路分析：套路：外循环：处理范围中的每一个数字0~1000
//内循环：处理这个数字，每一位的数字之和为15
#include<stdio.h>

int main()
{ 
    for(int i=0;i<=1000;i++)
    {
        int number=i;
        int sum=0;
    while(number!=0)
    {
        int temp=number%10;
        number=number/10;
        sum=sum+temp;
        
    }
    if(sum==15)
        {
            printf("%d\n",i);
        }
    }
}