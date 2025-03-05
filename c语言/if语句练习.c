#include <stdio.h>

int main()
{
int a=1;
if(a>=1)
{
    printf("小明就会丢掉苹果\n");
}


//练习：定义一个整数表示心爱的姑娘对我的好感度，
//如果大于等于60，就同意我的表白，否则，我就去表白别人了

 int b=60;
 if(b>=60)
 {
printf("我同意你的表白\n");
 }
 else
 {
    printf("我去表白别人了\n");

 }
 //练习
 /*
需求：我跟好朋友一起去看电影，如果在同一排连着坐，我会开心的看电影
如果不是在同一排或者没有连着坐，我会开心的打游戏
提示：每张电影票定义两个整型变量，分别表示第几排和座位号
注意：下次定义变量抓住词本身的英文，排row。座就用number
rowA，numberA；rowB，numberB
  */
int ticket1=3;
int ticket2=5;
int ticket3=3;
int ticket4=6;
if (ticket1==ticket3&&ticket4==ticket2+1||ticket4==ticket2-1)
{
    printf("我会开心的看电影\n");
}
else
{
    printf("我会开心的打游戏\n");
}
//第二种打法
int rowA=5;
int numberA=6;
int rowB=5;
int numberB=7;
if(rowA==rowB&&numberA-numberB==1||numberA-numberB==-1)
{
printf("我会开心的看电影");
}
else
{
    printf("我会开心的打游戏");
}
}