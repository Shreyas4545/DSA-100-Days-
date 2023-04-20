//kruskal's approach for the given case study
#include <stdio.h>
# define nodes 11
# define I 9999
int visited[100],sum=0,k=0,count=0;
int a[11][11]={
            {I,10,10,I,I,I,I,I,60,I,I},
            {10,I,I,I,I,I,I,I,I,100,I},
            {10,I,I,10,I,I,I,I,I,I,40},
            {I,I,10,I,10,I,I,40,I,I,I},
            {I,I,I,10,I,10,I,I,I,I,I},
            {I,I,I,I,10,I,60,I,I,I,I},
            {I,I,I,I,I,60,I,60,I,I,I},
            {I,I,I,40,I,I,60,I,40,I,I},
            {60,I,I,I,I,I,I,40,I,I,I},
            {I,100,I,I,I,I,I,I,I,I,60},
            {I,I,40,I,I,I,I,I,I,60,I},

};

void cost(int visited1[100],int u)
{
    int i,min=9999,j,l,temp,store[10];
    for(i=0;i<nodes;i++)
    visited1[i]=0;
    visited[u]=1;
    visited1[u]=1;
    store[k]=u;
     for(i=0;i<nodes-1;i++)
      {
          for(j=0;j<nodes;j++)
          {
             if(a[u][j]<min && visited1[j]==0)
             {
                min=a[u][j];

                l=j;
             }
          }
          if(min==9999)
         //return u;
          temp=a[u][l];
          printf("sum= %d\n",sum);
          sum+=min;
          count++;
          u=l;
          visited[u]=1;
          visited1[u]=1;
          min=9999;
          store[++k]=u;
      }
      printf("count = %d\n",count);
      for(i=0;i<nodes-1;i++)
        printf("%d to %d\n",store[i],store[i+1]);
    printf("%d to %d\n",store[i],store[0]);
    sum+=a[store[0]][store[i]];
    printf("%d\n",sum);

}
int main()
{
    int visited1[100],x=0,y;
    cost(visited1,x);

}
