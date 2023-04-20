#include<stdio.h>
#include<stdlib.h>
struct node{
struct node*next;
int data;
}*top=NULL;
void call()
{
   struct node*p=top;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
void push(int data)
{
    struct node*t=(struct node*)malloc(sizeof(struct node));
    if(t==NULL)
    {
        printf("stack is full\n");
    }
    else{
        t->data=data;
        t->next=top;
        top=t;
    }
}
int pop()
{
    struct node*t;
 int x=-1;

 if(top==NULL){
 printf("Stack is Empty\n");
 }
 else
 {
 t=top;
 top=top->next;
 x=t->data;
 free(t);
 }
 return x;
}

int main()
{
   struct node*top;
    push(10);
    push(20);
    push(30);
    push(40);
    call();
    printf("\n");
    printf("%d ",pop());
    printf("%d ",pop());
    return 0;
}
