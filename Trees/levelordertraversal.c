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
void createqueue(struct queue*q,int size)
{
    q->size=size;
    q->Q=(struct queue**)malloc(q->size*sizeof(struct queue*));
    q->front=q->rear=0;
}
void enqueue(struct queue*q,struct node*x)
{
    if((q->rear+1)%q->size==q->front)
    {
        printf("Queue is full\n");
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
        printf("queue is empty\n");
    }
    else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
};
int isempty(struct queue*q)
{
    if(q->front==q->rear)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void Tcreate()
{
    struct node*p,*t;
    struct queue q;
    int x;
    createqueue(&q,100);
    printf("Enter the root value\n");
    scanf("%d",&x);
    root=(struct node*)malloc(sizeof(struct node));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);
    while(!isempty(&q))
    {
        p=dequeue(&q);
        printf("Enter the lchild of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct node*)malloc(sizeof(struct node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(&q,t);
        }
        printf("enter the rchild of %d ",p->data);
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
void Lorder(struct node*root)
{
    struct queue q;
    createqueue(&q,100);
    printf("%d ",root->data);
    enqueue(&q,root);
    while(!isempty(&q))
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
int count(struct node*root)
{
    if(root)
    {
        return count(root->lchild)+count(root->rchild)+1;
    }
    else{
        return 0;
    }
}
int height(struct node*root)
{
  int x=0,y=0;
  if(root==0)
  {
      return 0;
  }
  x=height(root->lchild);
  y=height(root->rchild);
  if(x>y)
  {
      return x+1;
  }
  else{
    return y+1;
  }
}

int main()
{
    Tcreate();
    Lorder(root);
    int a=count(root);
    int b=height(root);
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}
