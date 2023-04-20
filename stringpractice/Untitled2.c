#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6};
    int b[]={1,2,4,5,6};
    int n=5;
    for(int i=0;i<n;i++)
    {

            if(a[i]!=b[i])
            {
                printf("%d\n",i);
            }

    }
    return n;
}
