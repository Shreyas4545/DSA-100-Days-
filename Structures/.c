#include<stdio.h>
#include<stdlib.h>
typedef struct rectangle{
int l;
int b;
}r;
int main()
{
    r *p,l,b;
    p=(r *)malloc(sizeof(r));

    p->l=10;
    p->b=20;
 printf("%d\n",p->l);
 printf("%d\n",p->b);
}
