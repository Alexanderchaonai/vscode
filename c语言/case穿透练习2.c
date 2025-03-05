#include<stdio.h>
 int main()
 {
    int button;
    scanf("%d",&button);
    switch(button)
    {
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 4:
        printf("退出服务");

        case 1:
        printf("机票查询");
        break;

        case 2:
        printf("机票预订");
        break;

        case 3:
        printf("机票改签");
        break;

        default:
        printf("没有这个按键");
        break ;
    }
    return 0;
 }