#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}Node;


void initialize(Node *head)//创建并且初始化这个链表，传入了头结点
{
    Node *p;
    Node *current;
    current=head;//相当于保护头结点哈，毕竟是个标志
    for(int i=1;i<=10;i++)
    {
        p=(Node *)malloc(sizeof(Node));
        p->data=i;
        p->next=NULL;
        current->next=p;
        current=p;
    }
    Node *q=head->next;
    while(q!=NULL)
    {
        printf("%d ",q->data);
        q=q->next;
    }
}


void reverse(Node *head)
{
    Node *first=NULL,*second=head->next,*third;
    while(second!=NULL)
    {
        third=second->next;
        second->next=first;
        first=second;
        second=third;
    }
    head->next=first;//一定要注意更新头结点的next指针,因为最后一次移动之后，first指向的就是反转后的第一个节点，这个时候我们要让头结点指向它作为新的头结点
    Node *q=first;
    while(q!=NULL)
    {
        printf("%d ",q->data);
        q=q->next;
    }
}

int main()
{
    Node *head=(Node *)malloc(sizeof(Node));
    head->data=0;
    head->next=NULL;
    initialize(head);
    printf("\n");
    reverse(head);

}