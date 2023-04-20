#include<stdio.h>
#include<stdlib.h>
struct node*root=NULL;
struct node{
struct node*lchild;
struct node*rchild;
int data;
};
struct queue{
int front;
int rear;
int size;
struct node**Q;
};
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
void LevelOrder(struct node *root)
{
 struct queue q;
 create(&q,100);

 printf("%d ",root->data);
 enqueue(&q,root);

 while(!Isempty(&q))
 {
 root=dequeue(&q);
 if(root->lchild)
 {
 printf("%d ",root->lchild->data);
 enqueue(&q,root->lchild);
 }
 if(root->rchild)
 {
 printf("%d ",root->rchild->data);
 enqueue(&q,root->rchild);
 }
 }
}
int main()
{
    tcreate();
    LevelOrder(root);
    return 0;
}
