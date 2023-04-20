#include <stdio.h>
#include <stdlib.h>
struct stack{
char data;
struct stack*next;
}*temp,*t,*top=NULL;

void push(char x)
{
    t=(struct stack*)malloc(sizeof(struct stack));
    if(top==NULL)
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
    if(top==NULL)
    {
        return 1;
    }
    else{
        temp=top;
        top=top->next;
        temp->next=NULL;
        return 0;
    }
}
int isbalanced(char*exp)
{
    int check;
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='('||exp[i]=='['||exp[i]=='{')
        {
            push(exp[i]);
        }
        else if(exp[i]==')'||exp[i]==']'||exp[i]=='}')
        {
            check=pop();
        }
        if(check==1)
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
    char str[50];
    int ch;
    //exp="{[(a+b)]}";
    do{
        printf("\n 1. Input the expression\n");
        printf("\n 2. Check the return value of the function !\n");
        printf("\n 3. Print whether the expression is balanced or not !\n");
        printf("\n 4. Print the input string\n");
        printf("\n 5. Terminate the program\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the value of expression\n");
                   scanf("%s",str);
                   break;
            case 2:printf("\n%d",isbalanced(str));
                   break;
            case 3:if(isbalanced(str)==1)
                    {
                      printf("\nThe given expression is balanced\n");
                    }
                   else{
                         printf("\nThe given expression is not balanced\n");
                       }
                    break;
            case 4: printf("%s",str);
                   break;
            case 5: exit(0);
                   break;

            default: printf("Enter a  valid choice\n");
        }
    }while(ch!=5);
    return 0;
}
