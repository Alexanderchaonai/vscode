#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}Node;

void insert(Node *head,int pos,int Elem)
{
    Node *p=head;
    int i=0;
    while(i<pos-1)//相当于从头开始找到要插入的位置的前一个位置
    {
        p=p->next;
        i++;
        if(p==NULL)
            break;
    }
    Node *q=(Node*)malloc(sizeof(Node));//q是要插入的新节点
    q->data=Elem;
    q->next=p->next;
    p->next=q;
}

void delete(Node *head,int pos)
{
    Node *p=head;
    int i=0;
    while(i<pos-1)//相当于从头开始找到要插入的位置的前一个位置
    {
        p=p->next;
        i++;
        if(p==NULL)
            break;
    }
    if(p->next==NULL)
    {
        printf("要删除的节点不存在");
    }
    Node *q;
    q=p->next;//使用q找到并保存要删除的节点
    p->next=p->next->next;
    free(q);
}

int GetLength(Node *head)
{
    Node *p=head;
    int lens=0;
    while(p!=NULL)
    {
        p=p->next;
        lens++;
    }
    return lens;
}

void freeList(Node *head)//释放整个链表
{
    Node *p=head->next;
    Node *q;
    //步骤：1.指针p指向头结点后的第一个节点
    //2.判断指针p是否指向空节点
    //3.如果不为空，就用指针q记录指针p的后继节点
    //4.释放指针p指向的节点
    while(p!=NULL)
    {
        q=p->next;
        free(p);
        p=q;//这里一开始写错了，写成p=q->next;原理就是q之前已经指向了p的下一个节点，所以不用再next了，现在的q都还没被释放
    }
    head->next=NULL;//让头结点指向空，释放完毕
}


int main()
{

}