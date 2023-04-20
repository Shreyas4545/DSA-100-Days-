#include<stdio.h>
int compare(int a[3], int b[3]);
int main()
{
    int a[3],b[3],i;
    printf("Enter the elememnts of alice and bob\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);

    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    compare(a,b);
//printf("%d ",C);

}
int compare(int a[],int b[])
{
    int sum1=0,sum2=0,i;
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            sum1 =sum1 + a[i];
        }
        else if(a[i]<b[i])
        {
            sum2 =sum2 + b[i];
        }

    }
        printf("%d %d",sum1,sum2);
}
