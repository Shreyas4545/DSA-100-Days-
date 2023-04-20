#include<stdio.h>
#include<stdlib.h>
struct stack{
int top;
int size;
int *a;
};
void create(struct stack*st)
{
    scanf("%d",&st->size);
    st->top=-1;
    st->a=(int *)malloc(st->size*sizeof(int));

}
void display(struct stack*st)
{
    for(int i=st->top;i>=0;i--)
    {
        printf("%d ",st->a[i]);
    }
    printf("\n");

}
void push(struct stack*st,int x)
{
    if(st->top==st->size-1)
    {
        printf("Overflow\n");
    }
    else{
        st->top++;
        st->a[st->top]=x;
    }
}
int pop(struct stack*st)
{
  int x=-1;
    if(st->top==-1)
    {
        printf("underflow\n");
    }
    else{
        x=st->a[st->top];
        st->top--;
    }
    return x;
}
int stacktop(struct stack*ptr)
{
    return ptr->a[ptr->top];
}
int stackbottom(struct stack*st)
{
    return st->a[0];
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
int main()
{
  struct stack*st;
  printf("stack is ready");
  create(&st);
  push(&st,45);
  push(&st,50);
  push(&st,55);
  push(&st,60);
  push(&st,65);
  display(&st);
  printf("\n");
  printf("%d ",peek(&st,5));
  printf("popped %d from the stack\n",pop(&st));
  printf("popped %d from the stack\n",pop(&st));
  printf("top element is: %d\n",stacktop(&st));
  printf("bottom element is: %d\n",stackbottom(&st));
  printf("%d ",peek(&st,2));
  return 0;

}
