#include<stdio.h>
#include<stdlib.h>
struct stack{
int n;
int *a;
int top;
};
void create(struct stack*st)
{
    scanf("%d",&st->n);
    st->top=-1;
    st->a=(int *)malloc(st->n*sizeof(int));
}
void display(struct stack*st)
{
    for(int i=st->top;i>=0;i--)
    {
        printf("%d ",st->a[i]);
    }
    printf("\n");
}
void push(struct stack*st,int data)
{
    if(st->top==st->n-1)
    {
        printf("Overflow\n");
    }
    else{
        st->top++;
        st->a[st->top]=data;
    }
}
int pop(struct stack*st)
{int x=-1;
    if(st->top==-1)
    {
        printf("Stack is empty\n");
    }
    else{
        x=st->a[st->top];
        st->top--;
    }
    return x;
}
int peek(struct stack*st,int index)
{
 int x=-1;
 if(st->top-index+1<0)
 {
     printf("error\n");
 }
 x=st->a[st->top-index+1];
 return x;
}
int stacktop(struct stack*st)
{
    return st->a[st->top];
}
int stackbottom(struct stack*st)
{
    return st->a[0];
}
int main()
{
    struct stack*st;
    printf("your stack is ready\n");
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    display(&st);
    printf("\n");
    printf("%d ",peek(&st,1));
    printf("\n");
    printf("top element is: %d ",stacktop(&st));
    printf("bottom element is: %d",stackbottom(&st));
    printf("\n");
    printf("%d ",pop(&st));
    printf("%d ",pop(&st));

    return 0;
}
