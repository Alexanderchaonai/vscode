#include<stdio.h>
typedef struct node
{
    int data;
    struct node* next;
}Node;

typedef struct stack
{
    Node* top;
}Stack;

Stack* init()
{
    Stack *s=(Stack*)malloc(sizeof(Stack));
    if(s=NULL)
        return NULL;
    s->top=NULL;
    return s;
}

void push(Stack *s,int x)
{
    Node *p=(Node*)malloc(sizeof(Node));
    if(p==NULL)
        return NULL;
    p->data=x;
    p->next=s->top;//先连后面
    s->top=p;//再连前面
}

void pop(Stack *s)
{
    if(s->top==NULL)
        return;
    Node *p=(Node*)malloc(sizeof(Node));
    s->top=s->top->next;
    free(p);
}

int main()
{
    
}