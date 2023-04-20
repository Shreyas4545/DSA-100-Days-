#include<stdio.h>
int compare(int a[3], int b[3],int ar[]);
int main()
{
    int a[3],b[3],i,C,ar[2];
    printf("Enter the elememnts of alice and bob\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }
    C=compare(a,b,ar);
    printf("%d ",C);

}
int compare(int a[3],int b[3],int ar[])
{
    int sum1=0,sum2=0,i;
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            sum1 +=1;
        }
        else if(a[i]<b[i])
        {
            sum2+=1;
        }
        ar[] = {sum1,sum2};
            return ar;
        else
            return 0;



    }
}
