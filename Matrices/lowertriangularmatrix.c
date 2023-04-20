#include<stdio.h>
#include<stdlib.h>
struct matrix{
int *a;
int n;
};
void set(struct matrix *m,int i,int j,int x)
{
    if(i>=j)
    {
        m->a[i*(i-1)/2+j-1]=x;
    }
}
void display(struct matrix m)
{
    int i,j;
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
          if(i>=j){  printf("%d ",m.a[i*(i-1)/2+j-1]);
          }
          else{
            printf("0 ");
          }
        }
        printf("\n");
    }
}
int main()
{
   struct matrix m;
   int x;
   scanf("%d",&m.n);
   m.a=(int *)malloc(m.n*(m.n+1)/2*sizeof(int));
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            scanf("%d",&x);
            set(&m,i,j,x);
        }
    }
    printf("\n\n");
    display(m);
    return 0;
}

