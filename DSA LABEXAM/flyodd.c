#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define v 4
#define INF 9999
void flyod(int graph[][v])
{
    int sol[v][v];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            sol[i][j]=graph[i][j];
        }
    }
    for(int k=0;k<v;k++)
    {
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                if(sol[i][k]!=INF && sol[k][j]!=INF && (sol[i][j]>sol[i][k]+sol[k][j]))
                {
                    sol[i][j]=sol[i][k]+sol[k][j];
                }
            }
        }
    }
    printsol(sol);
}
 void printsol(int sol[][v])
 {
      for(int i=0;i<v;i++)
         {
             for(int j=0;j<v;j++)
             {
                 if(sol[i][j]==INF)
                 {
                     printf("INF");
                 }
                 else {
                    printf("%d ",sol[i][j]);
                 }
             }
         }
}
int main()
{
    int graph[v][v];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&graph[i][j]);
        }
    }
    flyod(graph);
    return 0;
}
