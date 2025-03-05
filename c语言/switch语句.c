/*格式：
switch(表达式){                注意：这里的表达式不是一个判断，而是已经得到一个具体的值了
case 值1:                           得到这个结果后，再与case后的每个值进行比较
     语句体;                        如果有对应的值话，就会执行相关语句，在执行过程中
     break;                         遇到break就会结束
case 值2：                          如果所有case里面的值都不符合，就会执行default
     语句体2:                       里面的语句体，然后结束整个switch语句
     break;                         if是判断 ，switch是选择匹配
...                                 case穿透：case穿透只会往下穿，不会往上穿，因此若default在上面时，不会再被执行
default:                            case穿透的意思是当匹配到一个相同的值时，计算机会自动运行接下来的部分，不再受case是否匹配成功的限制，直到遇到break为止
     语句体n;
     break;
}
*/
/*题目：我的朋友家里有7个抱枕
周一：A
周二：B
...
周日：星期日抱枕

*/
#include <stdio.h>
int main()
{
    //1.定义变量表示当前的星期
    int week=1;
    //2.利用switch语句，去找合适的抱枕
    switch(week)
    {
        case 1:
        printf("使用A抱枕");
        break;
        case 2:
        printf("使用B抱枕");
        break;
        case 3:
        printf("使用C抱枕");
        break;
         case 4:
        printf("使用D抱枕");
        break;
         case 5:
        printf("使用E抱枕");
        break;
         case 6:
        printf("使用F抱枕");
        break;
          case 7:
        printf("使用星期日抱枕");
        break;
        default:
        printf("没有这个星期");
        break;
    }

}