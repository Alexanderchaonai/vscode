//输入一个非负整数n的值(n不超过20)，编程输出n!(n的阶乘)。程序中的整数请定义成long long型。请定义递归函数
//计算阶乘。
#include<stdio.h>

long long factorial(long long n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    else
    {
        // 递归情况：n! = n * (n-1)! 
        return n*factorial(n-1);
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    int factor=factorial(n);
    printf("%d",factor);
}



//编写函数，函数的形式参数为两个整数a和b(0<a<=b),函数返回a与b之间所有整数的和。要求分别用非递归和递归两种方式
//分别实现，并请尝试不同的递归策略。主函数中输入两个整数m和n，输出从m到n之间连续整数的和。
/*#include<stdio.h>

int Sum(int a,int b)
{
    if(a==b)
    return a;
    else
    {
        return a+Sum(a+1,b);
    }
}

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int sum=Sum(m,n);
    printf("%d",sum);
}*/
//编写函数返回Fibonacci数列的第N项的值，用递归方法实现。主函数中输入一个整数N（N<=40），输出Fibonacci数列的第N项的值。
//Fibonacci数列是一个具有递推关系的数列，其递推公式为：
/*#include<stdio.h>

int Fibonacci(int N)
{
    //基准情况
    if(N==1||N==2)
    {
        return 1;
    }
    else
    {
        //递归情况F(n)=F(n-1)+F(n-2)
        return Fibonacci(N-1)+Fibonacci(N-2);
    }
}

int main()
{
    int N;
    scanf("%d",&N);
    int num=Fibonacci(N);
    printf("%d",num);
}*/

