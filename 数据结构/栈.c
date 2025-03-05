#include<stdio.h>
//数组方面的实现
typedef struct
{
    int data[100];
    int top;//栈顶指针，但是在顺序结构中就是个下标，表示当前栈顶的位置在哪里
}Stack;


//数组实现栈中，索引初始值被设置为-1，代表此时栈为空
void init(Stack *s)
{
    s->top=-1;
}

void push(Stack* s,int num)
{
    s->data[s->top++]=num;
}

void pop(Stack *s)//我们知道，在数组里面，不可能真正删除某个数据，只是把索引往前调了一下来表示删除
{
    s->top--;
}

int top(Stack*s)
{
    return s->top;
}
//栈的顺序结构初始化——动态内存分配



int isEmpty(Stack *s)
{
    if(s->top==-1)
    {
        printf("空的\n");
        return 1;
    }
    return 0;
}
int main()
{

}