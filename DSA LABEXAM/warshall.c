#include<stdio.h>
#define v 4
#define INF 999
void warshall(int graph[][v])
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
                if(sol[i][j]==1 || sol[i][k]==1 && sol[k][j]==1)
                {
                    sol[i][j]=1;
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
            printf("%d ",sol[i][j]);
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
    warshall(graph);
}
