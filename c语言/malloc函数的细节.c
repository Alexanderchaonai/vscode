#include<stdio.h>
#include<stdlib.h>

void method(int* p,int len);
int main()
{
    int* p=malloc(25*sizeof(int));
    int len=25;

    method(p,25);//这里写p是因为p本身就是地址，而传递的就是地址
}
void method(int* p,int len)
{
    for(int i=0;i<len;i++)
    {
        printf("%d",p[i]);
    }
    printf("\n");


//malloc申请过多，会产生虚拟内存
//虚拟内存
/*虚拟：假的
        当申请的空间过多，因为每一个内存空间不会在刚申请的时候就立马调用
        所以C语言并不会立马就在内存中去开辟空间，而是什么时候存储数据了，什么时候再去开辟
        目的：提高内存的使用效率
*/


//number表示单次申请空间的字节大小
//如果申请空间成功，返回这个空间的首地址
//如果失败，则返回NULL
int number=1024*1024*1024;
int count=0;
while(1)
{
    int* p=malloc(number);
    count++;
    if(p==NULL)
    {
        printf("申请失败");
        break;
    }
    printf("内存%d申请成功%p\n",count,p);
}
    free(p);
}