#include<stdio.h>
void swap(int *a,int *b)
{
    float temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void bubblesort(int a[],int n)
{

float temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j+1]<a[j])
            {
                //temp=a[j];
                //a[j]=a[j+1];
                //a[j+1]=temp;
                swap(&a[j],&a[j+1]);

            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%f ",a[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    bubblesort(a,n);
}
