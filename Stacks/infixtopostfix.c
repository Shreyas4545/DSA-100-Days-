#include<stdio.h>
#include<stdlib.h>
struct Node{
char data;
struct Node*next;
}*top=NULL;
void call()
{
    struct Node*p=top;
    while(p)
    {
       printf("%d ",p->data);
       p=p->next;
    }
}
void push(char x)
{
    struct Node*t;
    t=(struct Node*)malloc(sizeof(struct Node));
    if(t==NULL)
    {
        printf("Stack is full\n");
    }
    t->data=x;
    t->next=top;
    top=t;
}
char pop()
{
  int x=-1;
    struct Node*p;
    if(top==NULL)
    {
        printf("Stack is empty\n");
    }
   else{
            p=top;
    x=p->data;
    top=top->next;
    free(p);
   }
   return x;
}
int pre(char x)
{
    if(x=='+' || x=='-')
    {
        return 1;
    }
    else if(x=='*' || x=='/')
    {
        return 2;
    }
    return 0;
}
int operandcheck(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
    {
        return 0;
    }
    else{
        return 1;
    }
}
char *intopost(char *infix)
{
    int i=0,j=0;
    char *postfix;
    int len=strlen(infix);
    postfix=(char *)malloc((len+2)*sizeof(char));
    while(infix[i]!='\0')
    {
        if(operandcheck(infix[i]))
        {
            postfix[j++]=infix[i++];
        }
        else{
            if(pre(infix[i])>pre(top->data))
            {
                push(infix[i++]);
            }
            else{
                postfix[j++]=pop();
            }
        }
    }
    while(top!=NULL)
    {
        postfix[j++]=pop();
    }
    postfix[j]=='\0';
    return postfix;
}
int main()
{
    char *infix="a+b*c-d/e";
    push('#');
    char *postfix=intopost(infix);
     printf("%s",postfix);
     return 0;
}
