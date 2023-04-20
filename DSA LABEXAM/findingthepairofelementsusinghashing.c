#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int H[20]={0};
    scanf("%d",&k);
   for(int i=0;i<n-1;i++)
   {
     if(H[k-a[i]]!=0)
     {
         printf("%d+%d=%d\n",a[i],k-a[i],k);
     }
     H[a[i]]++;
   }
   return 0;
}
