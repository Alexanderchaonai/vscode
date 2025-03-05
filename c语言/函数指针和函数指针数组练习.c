/*定义加减乘除四个函数，用户键盘录入三个数字，前两个表示参与计算的数字，第三个数字表示调用的函数
1：加法
2：减法
3：乘法
4：除法

优点：可以充分体现指针的灵活性

注意：只有形参完全相同而且返回值也要时一种类型的函数，才能放到同一个函数指针数组当中
*/

#include<stdio.h>

int add(int num1,int num2);
int substract(int num1,int num2);
int mutiply(int num1,int num2);
int divide(int num1,int num2);

int main()
{
    //1.定义一个数组去装四个函数的指针
    //叫做函数指针数组  数组里面装的函数指针
    int (*arr[4])(int,int)={add,substract,mutiply,divide};

    //2.录入数据
    printf("请输入两个数字参与计算：\n");
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("请输入一个数字表示要调用的函数:\n");
    int choose;
    scanf("%d",&choose);
    //3.根据用户选择调用不同的函数
    int res=(arr[choose-1])(num1,num2);
    //4.输出打印
    printf("%d\n",res);
}




int add(int num1,int num2)
{
    return num1+num2;
}
int substract(int num1,int num2)
{
    return num1-num2;
}
int mutiply(int num1,int num2)
{
    return num1*num2;
}
int divide(int num1,int num2)
{
    return num1/num2;
}