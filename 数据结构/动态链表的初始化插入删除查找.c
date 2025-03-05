#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Node* initial()
{
    struct Node *p;
    p=(struct Node *)malloc(sizeof(struct Node));
    if(p==NULL)
    {
        printf("内存分配失败");
    }
    p->data=0;
    p->next=NULL;
    return p;
}

void insert(struct Node *head,int num)//传进来一个头结点和要插入的数据
{
    struct Node *s=(struct Node *)malloc(sizeof(struct Node));
    if(s==NULL)
    {
        printf("内存分配失败");
    }
    s->data=num;
    s->next=head->next;
    head->next=s;
}

struct Node del(struct Node* head,int place)
{
    struct Node *p=head;
    for(int i=1;i<=place-1;i++)
    {
        if(p->next==NULL)
        {
            printf("要删除的该节点不存在,请重新输入");
            break;
        }
        p=p->next;
    }
    struct Node* temp=p->next;
    if(temp==NULL)
    {
        printf("要删除的节点不存在,请重新输入");
        return;
    }
    p->next=temp->next;
    free(temp);
}

void printList(struct Node* head)
{
    struct Node* p=head->next;
    while(p!=NULL)
    {
        printf("%d ->",p->data);
        p=p->next;
    }
    printf("NULL\n");
}

struct Node *find(struct Node* head,int data)//指针函数，它的返回值是一个指针
{
    struct Node *p=head->next;
    int cnt=0;
    while(p!=NULL)
    {
        if(p->data==data)
        {
            return p;
        }
        p=p->next;
    }
    return NULL;
}

int main()
{
    struct Node *head;
    head=initial();
    insert(head,1);
    insert(head,2);
    insert(head,3);
    printf("当前链表为：");
    del(head,2);
    printf("当前链表为：");
    int target=20;
    struct Node *result=find(head,target);
    if(result!=NULL)
    {
        printf("找的数据为%d的节点,其地址为%p",result->data,result->next);
    }
    else
        printf("未找到目标节点");
    printf("%p",result->next);
    return 0;
}