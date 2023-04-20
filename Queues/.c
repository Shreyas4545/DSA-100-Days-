#include<stdio.h>
int main()
{
    int a[100],b[100],size;
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        b[i]=-1;
    }
    for(int i=0;i<size;i++)
    {
        int count=1;
        for(int j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                b[j]=0;
            }
        }
        if(b[i]!=0)
        {
            b[i]=count;
        }
    }
    for(int i=0;i<size;i++)
    {
       if(b[i]!=0)
        {
            printf("%d %d",a[i],b[i]);
        }
    }
}
