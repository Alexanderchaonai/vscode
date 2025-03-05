//指针运算：
//例子：int a=10;
//int* p=&a;
//p+1,p为指针，只指向了第一个字节，+1后，因为指针变量为int类型，因此+1后会往后移动四个字节长度
#include<stdio.h>

int main()
{
    /*指针运算：
    步长：指针移动一次，走了多少个字节
    char：1
    short：2
    int：4
    long：4
    long long：8
    加法：指针往后移动了N步  p+1
    减法：指针往前移动了N步  p-1
    */
   int a=10;
   int* p=&a;
   printf("%p\n",p);
   printf("%p\n",p+1);
   printf("%p\n",p-2);
}