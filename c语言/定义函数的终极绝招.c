//定义函数的绝招
//1.我定义函数，是为了干什么事情？   函数体
//2.我干这件事情，需要什么才能完成   形参
//3.我干完了这件事情，调用处是否需要继续使用？    返回值类型
//题目：给定两个圆，判断谁的面积更大
//单独写一个return可以直接结束函数，return除了返回的作用也有直接结束的作用
#include<stdio.h>

int getarea(int r)
{
    int area=r*r;
    return area;
}
int main()
{
    int space1=getarea(3);
    int space2=getarea(2);
    if(space1>space2)
    {
        printf("第一个圆面积更大");
    }
    else if(space1<space2)
    {
        printf("第二个圆面积更大");
    }
    else
    {
        printf("两个圆面积一样大");
    }
}