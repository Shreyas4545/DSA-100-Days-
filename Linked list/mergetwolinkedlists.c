#include<stdio.h>
#include<stdlib.h>
struct node{
struct node*next;
int data;
}*first=NULL,*second=NULL,*third=NULL;

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
void create2(int b[],int n)
{
    struct node*t,*last;
    second=(struct node*)malloc(sizeof(struct node));
    second->data=b[0];
    second->next=NULL;
    last=second;
    for(int i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=b[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }

}
void concatination(struct node*p,struct node*q)
{

   third=p;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;
}
void merge(struct node*p,struct node*q)
{
    struct node*last;

    if(p->data<q->data)
    {
        third=last=p;
        p=p->next;
        last->next=NULL;
    }
    else{
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p && q)
    {
        if(p->data<q->data)
        {
            last->next=p;
             last=p;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p!=NULL)
    {
        last->next=p;
    }
    else{
        last->next=q;
    }
}
int isloop(struct node*first)
{
    struct node*p,*q;
    p=q=first;
    do
    {
        p=p->next;
        q=q->next;
        q=q?q->next:q;

    }while(p && q && p!=q);
    if(p==q)
    {
        return 1;
    }

    else{
        return 0;
    }

}
int main()
{
    int a[]={10,20,30,40,50,60};
    int b[]={5,15,25,35,45,55};
    create(a,6);
    create2(b,6);
    call(first);
    printf("\n\n");
    call(second);
    //concatination(first,second);
     printf("\n\n");
    //printf("concatinated\n");
    merge(first,second);
    call(third);

    struct node*t1,*t2;
    t1=first->next->next;
    t2=first->next->next->next->next->next;
    t2->next=t1;
    printf("%d\n",isloop(first));
    return 0;

}
