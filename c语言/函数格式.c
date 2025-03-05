//带有参数的函数
/*void函数名(形参1，形参2)这其中包含了函数期望接收的数据类型和数量
{
    函数体;
}
函数名(实参1，实参2)
在调用函数时，实际参数是用来取代对应形式参数的位置的


*/
//题目：定义一个函数，打印多次3，打印次数由传入的参数决定
//分析：需要函数的部分就是把次数这个变量当作实参，再在函数里面循环
#include <stdio.h>

void  print(int num)
{
    for (int i=0;i<num;i++)
    {
         printf("3");
    }
}
int main()
{
    int times;
    printf("请输入打印次数：\n");
    scanf("%d",&times);
    print(times);
}

