#include<stdio.h>
#include<stdlib.h>
struct node{
struct node*next;
int data;
}*head=NULL;
void call(struct node*head)
{
struct node*ptr=head;
   do
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }   while(ptr!=head);
}
void create(int a[],int n)
{
    struct node*t,*last;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=a[0];
    head->next=NULL;
    last=head;
    for(int i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    last->next=head;
}
struct node*insertatbegin(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node*p=head;

    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}
struct node*insertatindex(struct node*head,int index,int data)
{
 struct node*ptr=(struct node*)malloc(sizeof(struct node));

 struct node*p=head;
 int i=0;
while(i!=index-1) {
     p=p->next;
     i++;
 }
ptr->data=data;
 ptr->next=p->next;
  p->next=ptr;
  return head;

}
struct node*deleteatindex(struct node*head,int index)
{
   struct node*p=head;
   struct node*q=head->next;
   int i;
   for(i=0;i<index-1;i++)
   {
       p=p->next;
       q=q->next;
   }
   p->next=q->next;
   free(q);
   return head;
}
struct node*deleteatbegin(struct node*head)
{
    struct node*p=head;
   while(p->next!=head){
       p=p->next;
    }
           p->next=head->next;
           int x=head->data;
           free(head);
           head=p->next;
           return head;

}
struct node*deleteatend(struct node*head)
{
    struct node*p,*q;
    p=head;
    q=head->next;
    while(q->next!=head)
    {
        p=p->next;
        q=q->next;
    }
    p->next=head;
    free(q);
    return head;
}
int main()
{
    int a[]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200,210};
    create(a,21);
    call(head);
    printf("\n\n");
    head=insertatbegin(head,45);
    call(head);
    printf("\n\n");
    head=insertatindex(head,10,50);
    call(head);
    printf("\n\n");
    head=deleteatindex(head,5);
    call(head);
    printf("\n\n");
    head=deleteatbegin(head);
    call(head);
    printf("\n\n");
    head=deleteatend(head);
    call(head);
    return 0;

}
