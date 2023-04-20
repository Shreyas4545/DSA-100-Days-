#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void merge(int a[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int p[n1];
    int q[n2];
    for(int i=0;i<n1;i++)
    {
        p[i]=a[i+l];

    }
    for(int j=0;j<n2;j++)
    {
        q[j]=a[m+1+j];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(p[i]<q[j])
        {
            a[k]=p[i];
            i++;
        }
        else{
            a[k]=q[j];
            j++;
        }
        k++;
    }
    if(i==n1)
    {
        while(j!=n2)
        {
            a[k]=q[j];
            j++;
            k++;
        }
    }
    else if(j==n2)
    {
        while(i!=n1)
        {
            a[k]=p[i];
            k++;
            i++;
        }
    }
}
void mergesort(int a,int l,int r)
{
    if(l<r)
    {
       int m=(l+r)/2;
       mergesort(a,l,m);
       mergesort(a,m+1,r);
       merge(a,l,m,r);

    }
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
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
    mergesort(a,0,n-1);
    print(a,n);

}

