#include<stdio.h>
#include<stdlib.h>
struct queue{
int size;
int *arr;
int f;
int r;
};

int isempty(struct queue*q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}
int isfull(struct queue*q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    else
        {
            return 0;
    }
}
int enqueue(struct queue*q,int value)
{
    if(isfull(q))
    {
        printf("queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r]=value;
    }
}
int dequeue(struct queue*q)
{
    if(isempty(q))
    {
        printf("queue is empty\n");

    }
    else{
        int a=-1;
        q->f++;
        a=q->arr[q->f];
     return a;
    }
}
int main()
{
    struct queue q;
    q.size=10   ;
    q.f=q.r=-1;
    q.arr=(int *)malloc(sizeof(int));

    enqueue(&q,10);
    enqueue(&q,20);
    printf("element dequeued: %d\n",dequeue(&q));
    printf("element dequeued: %d\n",dequeue(&q));
        if(isempty(&q)){
    printf("queue is empty\n");
    }
    if(isfull(&q))
    {
        printf("hitman!\n");
    }

}
