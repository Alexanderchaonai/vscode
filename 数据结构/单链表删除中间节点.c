#include<stdio.h>
#include<stdlib.h>
//很神奇的一个做法，还是快慢指针，一个fast指针，一个slow指针，一开始让fast指向第一个节点，slow指向
//头结点，然后fast每走两步，slow走一步，当fast指向空，slow就到了要删除的节点，或者当fast的next指向空
//，slow就指向要删除节点的前置节点，理解不了画个图就OK了
typedef struct node
{
    int data;
    struct node* next;
}Node;

int delMiddleNode(Node *head)
{
    Node *fast=head->next;
    Node *slow=head;
    while(fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    Node *q=slow->next;
    slow->next=slow->next->next;
    free(q);
    return 1;
}

int main()
{
    
}