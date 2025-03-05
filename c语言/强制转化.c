#include<stdio.h>
 int main()
 {
    short a=10;
    short b=10;
    short c=(short)(a+b);
 }
 //强制转化就是指把取值范围大的手动转化为取值范围小的，在C语言
 //中系统会自动帮你转化好，但是还是最好手动写
 //格式：目标数据类型 变量名=（目标数据类型）被强转的数据