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
    int l,h,diff;
    //l=a[0];
    diff=a[0]-0;
    for(int i=0;i<n;i++)
    {
        if(a[i]-i!=diff)
        {
            printf("%d",i+diff);
            break;
        }
    }
    return 0;
}
