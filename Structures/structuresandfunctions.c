#include<stdio.h>
struct rectangle
{
    int length;
    int breadth;

};
void initialize(struct rectangle *r ,int l,int b)
{
    r->length=l;
    r->breadth=b;
}
int area(struct rectangle r)
{
    return r.length*r.breadth;
}
void changelength(struct rectangle *r,int l)
{
    r->length=l;
}

int main()
{
    struct rectangle r;
    initialize(&r,10,20);
    int x=area(r);
    printf("%d\n",x);
    changelength(&r,20);
    int y=area(r);
    printf("%d\n",y);
}
