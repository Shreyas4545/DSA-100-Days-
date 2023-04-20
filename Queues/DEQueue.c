#include<stdio.h>
#include<stdlib.h>
struct queue{
int front;
int rear;
int *Q;
int size;
};
void create(struct queue*q,int size)
{
    q->size=size;
    q->rear=q->front=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));
}
void infront(struct queue*q,int x)
{
  if(q->front==0 && q->rear==q->size-1 || q->front==q->rear+1)
  {
      printf("Queue is full\n");
  }
  else if(q->front==q->rear==-1)
    {
        q->front=q->rear=0;
        q->Q[q->front]=x;
    }
    else if(q->front==0)
    {
        q->front=q->size-1;
        q->Q[q->front]=x;
    }
    else{
        q->front=q->front-1;
        q->Q[q->front]=x;
    }
}
void inrear(struct queue*q,int x)
{
    if(q->front==0 && q->rear==q->size-1)
    {
        printf("Queue is full\n");
    }
    else if(q->rear==q->front==-1)
    {
        q->rear=q->front=0;
        q->Q[q->rear]=x;
    }
    else if(q->rear==q->size-1){
        q->rear=0;
        q->Q[q->rear]=0;
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}
void display(struct queue q)
{
    int i=q.front;
    while(i!=q.rear){
        printf("%d ",q.Q[i]);
        i=(i+1)%q.size++;
    }
    printf("\n");
    printf("%d ",q.Q[q.rear]);
}
int main()
{
    struct queue q;
    create(&q,5);
    infront(&q,10);
    infront(&q,20);
    inrear(&q,30);
    inrear(&q,40);

    display(q);
    return 0;
}
