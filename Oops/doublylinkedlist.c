#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *node;
node head[100];
node tail[100];
void append(int r)
{
  node temp;
  temp=(node)malloc(sizeof(struct node));
  printf("Enter your data\n");
  scanf("%d",&temp->data);
  temp->next=NULL;
  temp->prev=NULL;
  if(head[r]==NULL)
  {
     head[r]=tail[r]=temp;
     return;
  }
  else
  {
       node trav=head[r];
       while(trav->next!=NULL)
       {
           trav=trav->next;
       }
       temp->prev=trav;
       trav->next=temp;
       tail[r]=temp;
  }
}
void insert_begin(int r)
{
  node temp;
  temp=(node)malloc(sizeof(struct node));
  printf("Enter your data\n");
  scanf("%d",&temp->data);
  temp->next=NULL;
  temp->prev=NULL;
  if(head[r]==NULL)
  {
     head[r]=tail[r]=temp;
     return;
  }
  else
  {
      head[r]->prev=temp;
      temp->next=head[r];
      head[r]=temp;
  }
}
void display1(node pntr)
{
    while(pntr!=NULL)
    {
    printf("%d\t",pntr->data);
    pntr=pntr->next;
    }
    printf("\n");
}
void display2(node pntr)
{
    while(pntr!=NULL)
    {
    printf("%d\t",pntr->data);
    pntr=pntr->prev;
    }
    printf("\n");
}
void delete(int r)
{
    node p;
    int k;
    printf("Enter the element you want to delete\n");
    scanf("%d",&k);
    p=head[r];
    if(head[r]->data == k)
    {
        head[r] = head[r]->next;
        head[r]->prev=NULL;
        free(p);
        return;
    }
     while(p!=NULL)
    {
      if(p->data==k)
      {
         p->prev->next=p->next;
         p->next->prev=p->prev;
         free(p);
         printf("Element deleted\n");
         return;
      }
      p=p->next;
    }
}
void insertafter(int r)
{
    node temp;
    temp=(node)malloc(sizeof(struct node));
    printf("Enter the element \n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    temp->prev=NULL;
    printf("Enter element after\n ");
    int a;
    scanf("%d",&a);
    node p=head[r];
    while(p!=NULL)
    {
        if(p->data==a)
        {
             temp->prev=p;
             temp->next=p->next;
             p->next->prev=temp;
             p->next=temp;
        }
       p=p->next;
    }
}
void insertbefore(int r)
{
    node temp;
    temp=(node)malloc(sizeof(struct node));
    printf("Enter the element \n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    temp->prev=NULL;
    printf("Enter element after\n ");
    int a;
    scanf("%d",&a);
    node p=head[r];
    while(p!=NULL)
    {
        if(p->data==a)
        {
             temp->next=p;
             temp->prev=p->prev;
             p->prev->next=temp;
             p->prev=temp;
        }
       p=p->next;
    }
}
void call(int r)
{
    while(1)
    {
            printf("Enter your choice \n1.To insert at end\n2.Display from begining \n3.display from end\n");
            printf("4.To insert at begining\n5.To delete\n6.To insert after\n7.To insert before\n8.To exit\n");
            int c;
            scanf("%d",&c);
        switch(c)
        {
            case 1:
                append(r);
                    break;
                case 2:
                display1(head[r]);
                    break;
                case 3:
                display2(tail[r]);
                break;
                case 4:
                insert_begin(r);
                break;
                case 5:
                delete(r);
                break;
                case 6:
                insertafter(r);
                break;
                case 7:
                insertbefore(r);
                break;
                case 8:
                return ;
                break;
                default:
                printf("invalid input\n");
                break;
        }
    }
}
void displaym1(int j)
{
    node pntr=head[j];
    while(pntr!=NULL)
    {
    printf("%d\n",pntr->data);
    pntr=pntr->next;
    }
}
void displaym2(int j)
{
    node pntr=tail[j];
    while(pntr!=NULL)
    {
    printf("%d\n",pntr->data);
    pntr=pntr->prev;
    }
}
int main ()
{    int r,ok,n;
   for(int i=0;i<100;i++)
   {
       head[i]=NULL;
       tail[i]=NULL;
   }
   printf("Enter the number of double list you want to create\n");
   scanf("%d",&n);

   while(1)
   {
        printf("Enter the choice\n1.To go to list\n2.To display all list from begining\n");
        printf("3.To display all list from end\n4.To exit\n");
        scanf("%d",&ok);
       switch(ok)
    {
         case 1:
         printf("enter the list number you have to acssess\n");
         scanf("%d",&r);
         if(r<=n&&r<0)
         call(r-1);
         else
         printf("Invalid list number\n");
         break;
         case 2:
         for(int j=0;j<n;j++)
         {
             printf("List number %d:\n",j+1);
             displaym1(j);
         }

         break;
         case 3:
         for(int j=0;j<n;j++)
         {
             printf("List number %d:\n",j+1);
             displaym2(j);
         }
         break;
         case 4:
         exit(0);
         break;
         default:
         printf("Invalid Input\n");
         break;
   }
}
    return 0;
}
