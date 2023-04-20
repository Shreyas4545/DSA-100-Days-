#include<stdio.h>
#include<stdlib.h>
struct node*root=NULL;
struct node
{
 struct node *lchild;
 int data;
 struct node *rchild;
};
struct queue{
struct node**Q;
int front;
int rear;
int size;
};
struct stack{
int top;
int size;
struct Node**S;
};
void createstack(struct stack*st,int size)
{
    st->size=size;
    st->top=-1;
    st->S=(struct node **)malloc(st->size*sizeof(struct node*));
}
void push(struct stack*st,struct node*x)
{
    if(st->top==st->size-1)
    {
        printf("Stack is full\n");
    }
    else{
        st->top++;
        st->S[st->top]=x;
    }
}
struct node*pop(struct stack*st)
{
    struct node*x=NULL;
 if(st->top==-1)
 {
     printf("Stack is empty\n");
 }
 else{
    x=st->S[st->top--];
 }
 return x;
}
int isempty(struct stack st)
{
    if(st.top==-1)
    {
        return 1;
    }
    return 0;
}
int isfull(struct stack st)
{
    return st.top==st.size-1;
}
void create(struct queue*q,int size)
{
 q->size=size;
 q->front=q->rear=0;
 q->Q=(struct node**)malloc(q->size*sizeof(struct node*));
}
void enqueue(struct queue*q,struct node*x)
{
    if((q->rear+1)%q->size==q->front)
    {
        printf("queue is full\n");
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}
struct node*dequeue(struct queue*q)
{
    struct node*x=NULL;
    if(q->front==q->rear)
    {
        printf("Queue is empty");
    }
    else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}
int Isempty(struct queue*q)
{
    return q->front==q->rear;
}
void tcreate()
{
    struct node*p,*t;
    int x;
    struct queue q;
    create(&q,100);
    printf("enter the root data");
    scanf("%d",&x);
    root=(struct node*)malloc(sizeof(struct node));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);
    while(!Isempty(&q))
    {
        p=dequeue(&q);
        printf("Enter the left child of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct node*)malloc(sizeof(struct node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(&q,t);
        }
        printf("Enter the rchild of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct node*)malloc(sizeof(struct node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            enqueue(&q,t);
        }

    }
}
void IPreorder(struct node *p)
{
 struct stack stk;
 createstack(&stk,100);

 while(p || !isempty(stk))
 {
 if(p)
 {
 printf("%d ",p->data);
 push(&stk,p);
 p=p->lchild;
 }
 else
 {
 p=pop(&stk);
 p=p->rchild;
 }
 }
}
int main()
{
    int ch;
    do{
        printf("\n 1. Create a tree ! \n");
        printf("\n 2. Print the root details !\n");
        printf("\n 3. Enter any number to exit \n");
        printf("\n 4. Enter your choice !\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:tcreate();
                   break;
            case 2:IPreorder(root);
                   break;
            case 3:exit(0);
                   break;

            default:printf("\n Enter a valid choice \n");
        }
    }while(ch!=4);
    return 0;
}

