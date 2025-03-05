#include<stdio.h>
typedef struct node
{
    int data;
    struct node* next;
}Node;
//找到环的入口
Node * findBegin(Node* head)
{
    Node *fast=head;
    Node *slow=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            Node *p=fast;
            int count=1;
            while(p->next!=slow)
            {
                count++;
                p=p->next;
            }
            fast=head;
            slow=head;
            for(int i=0;i<count;i++)
            {
                fast=fast->next;
            }
            while(fast!=slow)
            {
                fast=fast->next;
                slow=slow->next;
            }
            return slow;
        }
    }
}







int main()
{

}