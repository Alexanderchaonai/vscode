#include<stdio.h>
#include<stdlib.h>
struct listnode
{
    int num;
    struct listnode *next;
};
int main()
{
    struct listnode* head,*p,*current;
    head=(struct listnode* )malloc(sizeof(struct listnode));
    head->num=0;
    head->next=NULL;
    current=head;
    for(int i=1;i<=5;i++)
    {
        p=(struct listnode* )malloc(sizeof(struct listnode));
        p->num=i;
        p->next=NULL;
        current->next=p;
        current=p;
    }
    struct listnode* p1;
    p1=head;
    while(p1!=NULL)
    {
        printf("%d ",p1->num);
        p1=p1->next;
    }
    struct listnode* p2;
    p2=head;
}