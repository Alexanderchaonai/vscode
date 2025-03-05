//需求：键盘录入两个数字，表示一个范围
//统计这个范围中，既能被6整除，又能被8整除的数字有多少个

//统计思想：定义一个变量，再合适的时候自增即可
#include<stdio.h>

int main()
{//1.键盘录入两个数字
    int a;
    int b;
    printf("请输入两个整数：\n");
    scanf("%d %d",&a, &b);
    int min=a<b?a:b;
    int max=a>b?a:b;

    //2.定义一个变量去统计个数
    int count=0;
    //3.获取范围中的每个数字
    for (int i=min;i<=max;i++ ) 
{ 
    if (i%24==0)
    {
      count++;
    }
}
    //4.打印
    printf("在这个范围当中,既能被6整除,又能被8整除的数字有%d个",count);
    //5.发现bug。未定义a和b的大小,因此现在返回去判断a和b的大小

 


    
}