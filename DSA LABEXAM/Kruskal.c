#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define V 6
typedef struct graph{
int u;
int v;
int w;
}graph;
int *array=NULL;
graph *take_input(int vertices,int edges)
{
 int u,v,w;
  array=(int*)malloc(sizeof(int)*vertices);
    graph *g=(graph*)malloc(sizeof(graph)*edges);
    if(array==NULL)
        for(int i=0;i<vertices;i++)
    {
        array[i]=i;
    }
    for(int i=0;i<edges;i++)
    {

    }
}
