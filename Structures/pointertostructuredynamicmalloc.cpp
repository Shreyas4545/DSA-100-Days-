#include<iostream>
using namespace std;
typedef struct rectangle{
int l;
int b;
}r;
int main()
{
    r *p;
    p=new int[10];
    p->l=10;
    p->b=20;
    printf("%d",p->l);
    printf("%d",p->b);

}
