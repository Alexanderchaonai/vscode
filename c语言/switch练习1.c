//键盘录入星期数，显示今天的减肥活动
/*#include<stdio.h>
int main()
{
int week;
printf("请输入今天是星期几\n");
scanf("%d",&week);
switch(week)
{
    case 1:
    printf("今天去爬山");
    break;
    case 2:
    printf("今天去吃饭");
    break;
    case 3:
    printf("今天去睡觉");
    break;
    case 4:
    printf("今天去打羽毛球");
    break;
    case 5:
    printf("今天去逛街");
    break;
    case 6:
    printf("今天去撸猫");
    break;
    default:
    printf("没有这个星期");
    break;
}
}*/


#include<stdio.h>

int main()
{
    int grade;
    scanf("%d",&grade);
    switch(20-grade/5)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        printf("A\n");
        break;
        case 4:
        case 5:
        case 6:
        printf("B\n");
        break;
        case 7:
        case 8:
        printf("C\n");
        break;
        default:
        printf("D\n");
        break;
    }
    return 0;
}