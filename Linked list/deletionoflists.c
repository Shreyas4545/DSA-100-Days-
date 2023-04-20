#include<stdio.h>
#include<malloc.h>
struct node{
int data;
struct node*next;
};
void call(struct node*ptr)
{
    while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    }
}
struct node*deleteatstart(struct node *head)
{
    //struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    head=head->next;
    free(p);
    return head;


};
struct node*deleteatmid(struct node*head,int index)
{

    struct node*p=head;
    struct node*q=head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;

    }
    p->next=q->next;
    free(q);
    return head;
};
struct node*deleteatend(struct node*head)
{
    struct node*p=head;
    struct node*q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
};
struct node*deleteatparticularvalue(struct node*head,int value)
{
    value=30;
    struct node*p=head;
    struct node*q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;

        q=q->next;
    }
    if(q->data==value)
    {
        p->next=q->next;
        free(q);
    }
    return head;
};
int main()
{
    struct node*head;
    struct node*second;
    struct node*third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;

    call(head);
    //head=deleteatstart(head);
    head=deleteatmid(head,2);
    //head=deleteatparticularvalue(head,20);
    call(head);

}

