#include <stdio.h>

int main()
{
    printf("请输入三个小数，分别表示长，宽，高\n");
    float l;
    float w;
    float h;
    scanf("%f %f %f",&l,&w,&h);
    printf("%.2f,%.2f,%.2f,%.2f",l*w,l*h,w*h,l*w*h);
    return 0;

}