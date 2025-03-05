#include<stdio.h>

double add(double num1,double num2);
double substract(double num1,double num2);
double mutiply(double num1,double num2);
double divide(double num1,double num2);


int main()
{
    double (*arr[4])(double,double)={add,substract,mutiply,divide};
    double num1,num2;
    scanf("%lf %lf",&num1,&num2);
    //可以根据用户输入选择调用的函数
    int choose;
    scanf("%d",&choose);
    double res=(arr[choose-1])(num1,num2);
    printf("%lf ",res);
    //也可以直接调用所有的函数
    double a=add(num1,num2);
    double b=substract(num1,num2);
    double c=mutiply(num1,num2);
    double d=divide(num1,num2);
    printf("%lf %lf %lf %lf",a,b,c,d);
}


double add(double num1,double num2)
{
    return num1+num2;
}
double substract(double num1,double num2)
{
    return num1-num2;
}
double mutiply(double num1,double num2)
{
    return num1*num2;
}
double divide(double num1,double num2)
{
    return num1/num2;
}