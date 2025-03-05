/*需求：键盘录入月份数，输出对应的季节
春季：3、4、5月份
夏季：6、7、8月份
秋季：9、10、11月份
冬季：12月份到次年2月份
*/
#include<stdio.h>

 int main()
 {
    int month;
    printf("请输入一个月份");
    scanf("%d",&month);

    switch(month)
    {
        case 3:
        case 4:
        case 5:
        printf("春季");
        break;
        case 6:
        case 7:
        case 8:
        printf("夏季");
        break;
        case 9:
        case 10:
        case 11:
        printf("秋季");
        break;
        case 12:
        case 1:
        case 2:
        printf("冬季");
        default:
        printf("没有这个月份");
        break;
    }
 }