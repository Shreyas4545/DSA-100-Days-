#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
struct node*prev;
}*head=NULL;
void call(struct node*head)
{
    struct node*ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);

        ptr=ptr->next;
    }

}
void create(int a[],int n)
{
 struct node*t,*last;
 head=(struct node*)malloc(sizeof(struct node));
 head->data=a[0];
 head->prev=NULL;
 head->next=NULL;
 last=head;
   for(int i=1;i<n;i++)
   {
    t=(struct node*)malloc(sizeof(struct node));
    t->data=a[i];
    t->next=NULL;
    t->prev=last;
    last->next=t;
    last=t;
   }
}
struct node*insertatbegin(struct node*head,int data)
{
  struct node*ptr=(struct node*)malloc(sizeof(struct node));
  ptr->data=data;
  ptr->prev=NULL;
  ptr->next=head;
  head->prev=ptr;
  head=ptr;
  return head;
}
struct node*insertatindex(struct node*head,int data,int index)
{
 int i=0;
 struct node*ptr=(struct node*)malloc(sizeof(struct node));
 ptr->data=data;
 struct node*p,*q;
 p=head;
 q=head->next;

while(i!=index-1)
 {
     p=p->next;
     q=q->next;
     i++;
 }
 ptr->next=q;
 q->prev=ptr;
 p->next=ptr;
 ptr->prev=p;
 return head;
}
struct node*insertatend(struct node*head,int data)
{
 struct node*ptr=(struct node*)malloc(sizeof(struct node));
 ptr->data=data;
 struct node*p=head;
 while(p->next!=NULL)
 {
     p=p->next;
 }
 ptr->next=NULL;
 ptr->prev=p;
 p->next=ptr;
 return head;

}
struct node*deleteatbegin(struct node*head)
{
 struct node*p=head->next;
 head->prev=NULL;
 head->next=NULL;
 p->prev=NULL;
 free(head);
 head=p;
 return head;

}
struct node*deleteatend(struct node*head)
{
 struct node*p=head;
 struct node*q=head->next;
 while(p->next->next!=NULL && q->next!=NULL)
 {
     p=p->next;
     q=q->next;
 }
 p->next=NULL;
 q->next=NULL;
 q->prev=NULL;
 free(q);
 return head;
}
int length(struct node*head)
{
    struct node*p=head;
    int len=0;
    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}
void reversedll(struct node*p)
{
 struct Node *temp;

 while(p!=NULL)
 {
 temp=p->next;
 p->next=p->prev;
 p->prev=temp;
 p=p->prev;
 if(p!=NULL && p->next==NULL)
 {
     head=p;
 }
 }
}
int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);
    call(head);
    printf("\n");
int c=length(head);
    printf("%d",c);
    printf("\n");
    head=insertatbegin(head,45);
    head=insertatbegin(head,50);
    call(head);
    printf("\n");
    head=insertatindex(head,20,6);
    call(head);
    printf("\n");
    head=insertatend(head,41);
    head=insertatend(head,39);
    call(head);
    int d=length(head);
    printf("%d ",d);
    printf("\n");
    reversedll(head);
    call(head);
    printf("\n");
    head=deleteatbegin(head);
    call(head);
    printf("\n");
    head=deleteatend(head);
    call(head);
    return 0;

}
