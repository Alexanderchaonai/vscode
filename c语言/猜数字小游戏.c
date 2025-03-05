//生成一个1-100之间的随机数，使用键盘录入去猜，猜中为止
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int guess;
    srand(time(NULL));
    int num=rand()%100+1;
    printf("%d\n",num);
    for (int i=1;;i++)
    {
        printf("请输入一个0-100之间的数字\n");
        scanf("%d",&guess);
        if(guess==num)
        {
            printf("中了\n");
            break;
        }
        if(guess<num)
        {
            printf("小了\n");
        }
        else
        {
            printf("大了\n");
        }
    }
}