#include<stdio.h>
int main()
{
    int n,sum,N;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    N=a[n-1];
    int S=N*(N+1)/2;
    printf("%d %d",sum,S);
    int c=S-sum;
    printf("%d",c);
    return 0;
}
