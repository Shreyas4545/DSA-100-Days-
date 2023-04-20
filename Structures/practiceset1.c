#include<stdio.h>
#include<string.h>
typedef struct complexnumbers{
int x,y;
}cno;
cno sum(cno v1,cno v2)
{
    cno result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
}
int main()
{
    cno v1,v2,res;
    v1.x=50;
    v1.y=60;
    v2.x=40;
    v2.y=70;
    printf("%d\n",v1.x);
    printf("%d\n",v1.y);
    printf("%d\n",v2.x);
    printf("%d\n",v2.y);
    res=sum(v1,v2);
    printf("%d\n",res.x);
    printf("%d\n",res.y);
    return 0;
}
