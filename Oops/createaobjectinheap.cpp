#include<iostream>
using namespace std;
class rectangle{
public:
    int a;
    int b;
    void setv(int x,int y)
    {
        a=x;
        b=y;
    }
    int area()
    {
        return a*b;
    }
    int perimeter()
    {
        return 2*(a+b);
    }
};
int main()
{
    //rectangle r;
    rectangle *p;
    p=new rectangle();
    p->setv(10,10);
    cout<<(p->area())<<endl<<p->perimeter();
}

