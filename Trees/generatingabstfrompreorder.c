#include<stdio.h>
#include<stdlib.h>
#define Max 9999
struct node
{
 struct node *l;
 int data;
 struct node *r;
};
struct node*root=NULL;
struct stack{
struct node**st;
int top;
int size;
};
void createstack(struct stack*s,int size)
{
    s->size=size;
    s->top=-1;
    s->st=(struct node**)malloc(s->size*sizeof(struct node*));
}
void push(struct stack*s,struct node*x)
{
    if(s->top==s->size-1)
    {
        printf("Stack is full\n");
    }
    else{
        s->top++;
        s->st[s->top]=x;
    }
}
struct node*pop(struct stack*s)
{
    struct node*x;
 if(s->top==-1)
 {
     printf("Stack is empty\n");
 }
 else{
    x=s->st[s->top];
    s->top--;
 }
 return x;
}

int isempty(struct stack*s)
{
    if(s->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack*s)
{
    return s->top==s->size-1;
}
void btc(int pre[],int n)
{
    struct stack*s;
    struct node*p,*t,*u;
   createstack(&s,100);
   int i=0;
   root=(struct node*)malloc(sizeof(struct node));
   root->data=pre[i++];
    root->l=root->r=NULL;
    p=root;
    while(i<n)
    {
        if(pre[i]<p->data)
        {
            t=(struct node*)malloc(sizeof(struct node));
            t->data=pre[i++];
            t->l=t->r=NULL;
            p->l=t;
            push(&s,p);
            p=t;
        }
        else{
            u->data=s->st[s->top];
            if(pre[i]>p->data && pre[i]<u->data && isempty(&s)==Max)
            {
                 t=(struct node*)malloc(sizeof(struct node));
            t->data=pre[i++];
            t->l=t->r=NULL;
            p->r=t;
            p=t;
            }
            else{
                p=pop(&s);
            }
        }
    }

}
void preorder(struct node*q)
{
    if(q)
    {
        printf("%d ",q->data);
        preorder(q->l);
        preorder(q->r);
    }
}
int main()
{
    int pre[]={30,20,10,15,25,40,50,45};
    int n=8;
    btc(pre,8);
    preorder(root);
}
