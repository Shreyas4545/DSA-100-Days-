#include<stdio.h>
#include<stdlib.h>
typedef struct kruskal
{
    int u,v,w;
}K;
void sort_g(K k[],int n)
{
    int i,j,min;
    K temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        j=i+1;
        while(j<n){
            if(k[j].w<k[min].w)
            min=j;
            j++;
        }
        temp=k[i];
        k[i]=k[min];
        k[min]=temp;
    }
    /*for(i=0;i<n;i++)
    {
        printf("%d %d %d\n",k[i].u,k[i].v,k[i].w);
    }*/
}
void logic(K k[],int n)
{
    int x,i,j,count=0,s;
    int temp[100];
    for(x=0;x<n;x++)
        temp[x]=x;
    printf("U\tV\tW\n");
    for(x=0;x<n;x++)
    {
        s=k[x].u;
        i=temp[s];
        s=k[x].v;
        j=temp[s];
        if(i==j)
            continue;
        else
        {
            for(s=0;s<n;s++)
            {
                if(temp[s]==i)
                    temp[s]=j;
            }
            printf("%d %d %d\n",k[x].u,k[x].v,k[x].w);
        }
    }
}
int main()
{
  K k[100];
  int n,i;
  printf("Enter the number of edges ");
  scanf("%d",&n);
  printf("Enter the edge and associated weights\n");
  for(i=0;i<n;i++)
    scanf("%d %d %d",&k[i].u,&k[i].v,&k[i].w);
    printf("End of insertion\n");
  sort_g(k,n);
  logic(k,n);
  return 0;
}
