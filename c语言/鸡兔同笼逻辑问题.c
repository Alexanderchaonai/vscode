#include<stdio.h>

int main()
{
    int head;
    int feet;
    scanf("%d %d",&head,&feet);
    int rabbits=(feet-2*head)/2;
    int chickens=head-rabbits;
    printf("%d %d",chickens,rabbits);
}

/*错误示范：
int head;
int feet;
int rabbits;
int chickens;
head=chickens+rabbits;
feet=chickens*2+rabbits*4;
这两行代码的错误在于，在用户已经输入head和feet的值之后，我定义了两个未赋值的变量，该变量被初始化为零
而我拿这两个变量去为已经确定的量赋值，这显然是不符合逻辑的
正确的逻辑应该为：使用用户已经输入的两个量进行计算，为要  求的变量进行赋值。
注意：时刻记住，赋值运算符的"=",从来都是将等式右边的量赋值给左边的量，因此，在计算未知数时，通常将已知量
放在等号右边，而将未知量作为要   求的量。
*/