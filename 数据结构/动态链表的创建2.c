#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;//数据域
    struct node* next;//指针域，存放下一个节点的地址
};
//为了更方便的操作链表，我们会在单链表的第一个结点前附设一个结点头节点，头节点的数据域可以不存储任何信息，谁叫他是第一个呢
//不过我们也可以在里面存储线性表的长度等附加信息，头结点的指针域指向第一个结点的指针
int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node));//创建一个头节点
    head->data=0;//初始化头节点
    head->next=NULL;//将头节点指向的下一个节点置为空
    struct node *p,*current;
    current=head;//存储头结点
    for(int i=1;i<=5;i++)
    {
        p=(struct node*)malloc(sizeof(struct node));
        p->data=i;
        p->next=NULL;
        current->next=p;//让current的指针域指向刚刚创建的结点p
        current=p;//然后current右移，进行下一次的创建
    }
    struct node *p1;
    p1=head;//让p1指向头结点，相当于一个定位的作用
    while(p1!=NULL)
    {
        p1=p1->next;
        printf("%d ",p1->data);
    }
}