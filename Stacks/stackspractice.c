#include<stdio.h>
#include<stdlib.h>
struct stack{
int size;
int top;
int *arr;
};
int isempty(struct stack*ptr)
{
    if(ptr->top==-1)
    {
        return -1;
    }
    else{
        return 0;
    }

}
int isfull(struct stack*ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return -1;
    }
    else{
        return 0;
    }
}
int push(struct stack *ptr,int value)
{
    if(isfull(ptr))
    {
        printf("the stack is full cannot accomodate %d\n",value);

    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
int pop(struct stack *ptr)
{
    if(isempty(ptr))
    {
        printf("cannot pop\n");

    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{
    struct stack*sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=10;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    sp->top=-1;
    printf("stack is ready\n");
    printf("before pushing : %d\n",isempty(sp));
    printf("before pushing: %d\n",isfull(sp));
    push(sp,10);
    push(sp,20);
    push(sp,20);
    push(sp,20);
    push(sp,20);
    push(sp,20);
    push(sp,20);
    push(sp,20);
    push(sp,20);
    push(sp,30);
    push(sp,40);
    printf("after pushing: %d\n",isempty(sp));
    printf("after pushing: %d\n",isfull(sp));
    printf("%d is popped\n",pop(sp));
}
