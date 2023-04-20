#include<stdio.h>
#include<stdlib.h>
struct node{
struct node *next;
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
    int i;
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
void recursivedisplay(struct node*p)
{
    //struct node*p=first;
    if(p!=NULL)
    {
        recursivedisplay(p->next);
        printf("%d ",p->data);
    }
}
int countnoofnodes(struct node*first)
{
    struct node*p=first;
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;

    }
    return count;
}
int sumofnodes(struct node*first)
{
    struct node*p=first;
    int sum=0;
    while(p)
    {
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}
int max(struct node*first)
{
    struct node*p=first;
    int max=0;
    while(p!=NULL)
    {
        if(p->data>max)
        {
            max=p->data;
        }
        p=p->next;
    }
    return max;
}
int linearsearch(struct node*first,int key)
{
    struct node*p=first;
    while(p)
    {
        if(p->data==key)
        {
            return(p);
        }

        p=p->next;
    }
    return NULL;
}
int sortedlist(struct node*first)
{
    struct node*p=first;
    int x=0;
    while(p!=NULL)
    {
        if(p->data<x)
        {
            return 0;
        }
        x=p->data;
        p=p->next;
    }
    return 1;
}
struct node*duplicates(struct node*first)
{
 struct node*p=first;
 struct node*q=first->next;
 while(q)
 {
     if(p->data!=q->data)
     {
         p=p->next;
         q=q->next;
     }
     else{
        p->next=q->next;
        free(q);
        q=p->next;
     }
 }
 return first;
}
int main()
{
    /*struct node*head;
    struct node*second;
    struct node*third;
    struct node*four;

    head=(struct node*)malloc(sizeof(struct node*));
    second=(struct node*)malloc(sizeof(struct node*));
    third=(struct node*)malloc(sizeof(struct node*));
    four=(struct node*)malloc(sizeof(struct node*));

    head->data=5;
    head->next=second;
    second->data=10;
    second->next=third;
    third->data=15;
    third->next=four;
    four->data=20;
    four->next=NULL;
    call(head);*/
    int a[]={1,2,3,3,5,6,7,8,9};
    create(a,9);
    recursivedisplay(first);
    first=duplicates(first);
    call(first);
   /*int c=countnoofnodes(first);
   int d=sumofnodes(first);
   int e=max(first);
   int f=linearsearch(first,1);
    int g=sortedlist(first);
    printf("%d %d %d %d %d",c,d,e,f,g);*/

   return 0;

}
