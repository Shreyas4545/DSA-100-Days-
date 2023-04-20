#include<stdio.h>
#include<stdlib.h>
struct node{
struct node*next;
char data;
}*top=NULL;
void call()
{
    struct node*p=top;
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
void push(char x)
{
    struct node*t=(struct node*)malloc(sizeof(struct node));
    if(t==NULL)
    {
        t->data=x;
        top=t;
        top->next=NULL;
    }
    else{
    t->data=x;
    t->next=top;
    top=t;
    }
}
int pop()
{
    struct node*p;
    if(top==NULL)
    {
        printf("stack is empty\n");
        return 1;
    }
    else{
       p=top;
        top=top->next;
        p->next=NULL;
        //x=p->data;
        //free(p);
        return 0;
    }
    //return x;
}
int isbalanced(char *exp)
{
    int  check1;
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        {
            push(exp[i]);
        }
        else if(exp[i]==')')
        {
            if(top==NULL)
            {
                return 0;
            }
            check1=pop();
        }
    }
    if(top==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
  char *exp="(((a+b)*(c+d)))";
  printf("%d ",isbalanced(exp));
    return 0;
}






