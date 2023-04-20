
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int H[20]={0};
    for(int i=0;i<n;i++)
    {
        H[a[i]]+=1;
    }
    for(int i=0;i<20;i++)
    {
        if(H[i]>1)
        {
            printf("%d %d\n",i,H[i]);
        }
    }
}
