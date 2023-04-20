#include<stdio.h>
void insertionsort(int a[],int n)
{
    int v;
    for(int i=1;i<n;i++)
    {
        v=a[i];
        int j;
        j=i-1;
        while(j>=0 && a[j]>v)
        {
          a[j+1]=a[j];
          j=j-1;
          a[j+1]=v;


        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertionsort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
