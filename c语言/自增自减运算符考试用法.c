//自增自减运算符参与计算时先加后加是不一样的
#include<stdio.h>

int main()
{
    int a=10;
    int b=a++;//加号在后面，先赋值再自增
    printf("%d\n",a);//2.然后a自己再自增为11
    printf("%d\n",b);//1.a的值赋给b

    int c=10;
    int d=++c;//加号在前面，先自增再赋值
    printf("%d\n",c);//1.c自增为11
    printf("%d\n",d);//2.c的值赋给d也是11


}