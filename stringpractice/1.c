#include<stdio.h>
void countpositiveintegers(int a[],int n,int count)
{
  count =0;
  int i;
    for(int i=0;i<n;i++)
    {


    if(a[i]>0)
    {
        count ++;
    }
    }
    printf("%d\n",count);
}
int main()
{
    int n,count;
    scanf("%d",&n);
    int a[n];
    printf("enter the %d elements\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    countpositiveintegers(a,n,count);

}
