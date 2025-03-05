/*隐式转换是指在C语言中系统自动将取值范围小
的转换为取值范围大的，比如可以自动把short转
换为int类型

注意注意注意：不同的变量类型可以储存的数据大小不同，这与自身字节长度有关
比如char自身只有一个字节，储存量很小，而int有四个字节，范围就比char大得多
*/
#include<stdio.h>

int main()
{
    short k=10;
    int j=k;


/*隐式转换的两条规则
1.取值范围小的，和取值范围大的计算，小的会
自动提升为大的，再进行运算。
大小：double>float>long long>long>int>short>char
*/
int d=10;
double e=3.14;
double h=d+e;
/*2.short char类型的数据的数据在运算的时候
，先提升为int，再进行运算。
*/
short a=10;
short b=10;
int c=a+b;
/*注意，char的类型的数据若定义的不是数据，则会根据ASCLL码表
上的对应关系进行转化
*/
char f='a';
int g=f+1;
printf("%d",g);
}