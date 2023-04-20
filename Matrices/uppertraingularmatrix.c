#include<stdio.h>
struct matrix{
int *a;
int n;
};
void set(struct matrix *m,int i,int j,int x)
{
   int n;
   if(i<=j)
   {
       m->a[(i-1)*n-(i-2)*(i-1)/2+j-i]=x;
   }
}
void display(struct matrix m)
{
    int i,j,n;
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            if(i<=j)
            {
                printf("%d ",m.a[(i-1)*n-(i-2)*(i-1)/2+j-i]);
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
    scanf("%d",&m.n);
    int x;
    m.a=(int *)malloc(m.n*(m.n+1/2)*sizeof(int));
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            scanf("%d",&x);
            set(&m,i,j,x);
        }
    }
    display(m);
    return 0;
}
