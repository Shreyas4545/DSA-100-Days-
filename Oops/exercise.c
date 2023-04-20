#include <stdio.h>
#include <stdlib.h>
struct Node
{
 char data;
 struct Node *next;
}*top=NULL;

void push(char x)
{
 struct Node *t;
 t=(struct Node*)malloc(sizeof(struct Node));

 if(top==NULL){
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
 struct Node *t;

 if(top==NULL){
   printf("Stack is Empty\n");
   return 1;
 }
 else
 {
 t=top;
 top=top->next;
 t->next=NULL;
 return 0;
 }
}

void Display()
{
 struct Node *p;
 p=top;
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
 printf("\n");
}
int isbalanced(char *exp)
{
    int check1;
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='{' || exp[i]=='(' || exp[i]=='[')
        {
            push(exp[i]);
        }
        else if(exp[i]=='}'|| exp[i]==']'|| exp[i]==')')
        {
            check1=pop();
        }
        if(check1==1)
        {
            return 0;
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
    char *exp;
    exp="{([a+b]*[c+d])}";
    printf("%d ",isbalanced(exp));
    return 0;
}
