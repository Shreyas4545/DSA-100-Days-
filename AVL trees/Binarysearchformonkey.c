#include<stdio.h>
int binarysearch(int a[],int key,int size)
{
    int l,h,m;
    l=0,m=size-1;
    while(l<=h)
    {
        m=(l+h)/2;
        if(a[m]==key)
        {
            return m;
        }
        else if(a[m]<key)
        {
            l=m+1;
        }
        else if(a[m]>key)
        {
            h=m-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of an array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe array elements are: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int key,d;
    printf("\nenter the key to search\n");
    scanf("%d",&key);
    d=binarysearch(a,key,n);
    printf("%d is found at %d index\n",key,d);
    return 0;
}
