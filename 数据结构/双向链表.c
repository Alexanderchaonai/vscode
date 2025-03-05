#include<stdio.h>

typedef struct node
{
    int data;
    struct node *next,*prev;
}Node;

//头插法,总体思路就是先连接新的，再断开旧的
int insertHead(Node *head,int data)
{
    Node *p=(Node*)malloc(sizeof(Node));
    p->data=data;
    p->prev=head;
    p->next=head->next;
    if(head->next!=NULL)
    {
        head->next->prev=p;//时刻记住，这个next指向的后面节点的一整个东西，不是单独一个框框，通过这个一整个再去单独的指向一个框，也就是prev
    }
    head->next=p;
    return 1;
}
//尾插法，从最后一个节点前面插入
int insertTail(Node *tail,int data)
{
    Node *p=(Node*)malloc(sizeof(Node));
    p->data=data;
    p->prev=tail;
    tail->next=p;
    p->next=NULL;
}
//任意位置插入，其实和头插法基本一样，只不过这里不用从头结点插入，而是找到要插入位置的节点的前置节点，从这里开始插入即可
//也是先连接新的，再断掉旧的
int insertNode(Node *head,int pos,int data)
{
    Node *p=head;
    int i=0;
    while(i<pos-1)
    {
        p=p->next;
        i++;
        if(p=NULL)
        {
            printf("该节点不存在");
            return 0;
        }
    }
    Node *q=(Node*)malloc(sizeof(Node));
    q->data=data;
    q->prev=p;
    q->next=p->next;
    p->next->prev=q;
    p->next=q;
    return 1;
}

//也是先找前置p，再用q记录要删除的节点，然后改变p的后继节点以及要删除节点的下一个节点的前驱，最后释放删除节点的空间
void deleteNode(Node *head,int pos)
{
    int i=0;
    Node *p=head;
    while(i<pos-1)
    {
        p=p->next;
        i++;
    }
    Node *q=(Node*)malloc(sizeof(Node));
    q=p->next;//表示q是要删除的那个节点，时刻记住，next指向的一直是一整个节点
    p->next=p->next->next;
    q->next->prev=p;
    free(q);
}

void freeList(Node *head)
{
    
}


int main()
{

}