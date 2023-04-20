#include<stdio.h>
int main()
{
    int x,temp;
    scanf("%d",&x);
    int a[50];
    int *ptr=&a[0];
    int *q=&a[x-1];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<x;i++)
    {
             printf("%d\n",*ptr);
             ptr++;
    }
    for(int i=x-1;i>=0;i--)
    {
         printf("%d\n",*q);
         q--;
    }
    return 0;
}
