#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else
        {
            n=n-m;
        }
    }
    printf("GCD is %d\n",m);
}
