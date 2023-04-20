#include<stdio.h>
typedef struct rectangle{
int length;
int breadth;
}r;
int area(r x)
{
    return x.length*x.breadth;
}
int main()
{
    r a;
    a.length=10;
    a.breadth=10;
    int x=area(a);
    printf("%d",x);
}

