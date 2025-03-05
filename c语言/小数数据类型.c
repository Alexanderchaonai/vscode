#include<stdio.h>

int main()
{
    //定义float double long double数据类型的变量
    //float单精度数据变量，可以精确到小数点后6位，windows占4个字节
    //如果想少保留位数，则在%后加入“.保留位数”
    float a=3.14F;
    printf("%f\n",a);

    //double双精度数据变量，可以精确到小数点后15位，windows占8个字节
    //注意，平时题目中为表明小数数据类型时，一律用double
    double b=1.78;
    printf("%lf\n",b);

    //long double高精度变量，windows占8个字节
    long double c=3.1415926L;
    printf("%.2lf\n",c);

    //用sizeof测量每一种数据类型占用多少字节
    printf("%zu",sizeof(float));
    printf("%zu",sizeof(a));

}