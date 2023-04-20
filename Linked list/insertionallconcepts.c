#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*next;
    int data;
}*first=NULL;
void call(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
void create(int a[],int n)
{
    struct node*t,*last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}
struct node*insertatbegin(struct node*first,int data)
{
    struct node*p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->next=first;
    return p;
}
struct node*insertatindex(struct node*first,int data,int index)
{
    int i=0;
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=first;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
 ptr->data=data;

 ptr->next=p->next;
 p->next=ptr;


    return first;

}
struct node*insertatend(struct node*first,int data)
{
 struct node*ptr=(struct node*)malloc(sizeof(struct node));
 struct node*p=first;

 while(p->next!=NULL)
 {
     p=p->next;

 }
 ptr->data=data;
  p->next=ptr;
 ptr->next=NULL;

  return first;
}
int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);

    //first=insertatbegin(first,45);
    first=insertatindex(first,45,3);
    //first=insertatend(first,50);

    call(first);
    return 0;
}
