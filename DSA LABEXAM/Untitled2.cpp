#include<stdio.h>
int *fun(int n)
{
   int *p=new int[5];
    for(int i=0;i<n;i++)
    {
        p[i]=5+i;
    }
    return p;
}
int main()
{
    int *q=fun(5);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",q[i]);
    }
    return 0;

}


