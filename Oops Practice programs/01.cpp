#include<iostream>
using namespace std;
class point{
public:
    int a;
    point(int x):a(x){};
};
class inline1:public point{
  public:
      int d;
      inline1(int y):point(y){};
      inline int magnitude(point*c,point*b);

};
int inline1::magnitude(point*c,point*b)
{
     return c->a+b->a;
}
int main()
{
    point p1(5),p2(10);
    inline1 l1(15);
    int m;
    m=l1.magnitude(&p1,&p2);
    cout<<m;
    return 0;
}
