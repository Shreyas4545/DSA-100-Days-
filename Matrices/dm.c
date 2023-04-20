#include<stdio.h>
struct matrix{
int a[10];
int n;
};
void set(struct matrix *m,int i,int j,int x)
{
     if(i==j)
     {
         m->a[i-1]=x;
     }
}
void display(struct matrix m)
{

    for(int i=0;i<m.n;i++)
    {
        for(int j=0;j<m.n;j++)
        {
            if(i==j)
            {
               printf("%d ",m.a[i]);
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
    int n;
    m.n=4;
    set(&m,1,1,2);
    set(&m,2,2,4);
    set(&m,3,3,6);
    set(&m,4,4,10);
    display(m);
    return 0;

}
