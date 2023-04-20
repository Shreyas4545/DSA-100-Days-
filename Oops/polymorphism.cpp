#include<iostream>
using namespace std;
class shape{
protected:
    int a;
    int b;
    shape(int x,int y)
    {
        this->a=x;
        this->b=y;
    }
    virtual int getarea()
    {
        return 0;
    }
    void printshape()
    {
        cout<<a<<" "<<b<<" "<<getarea()<<endl;
    }
};
class rectangle:public shape{
protected:
    rectangle():shape(){};
    int getarea()
    {
        return a*b;
    }
    void printshape()
    {
        cout<<"Rectangle"<<endl;
    }
};
class traingle:public shape{
public:
   triangle():shape(){};
    int getarea()
    {
        return 0.5*a*b;
    }
    void printshape()
    {
        cout<<"Triangle"<<endl;
    }
};
int main()
{
    shape *s;
    rectangle r(10,20);
    triangle t(20,30);
    s=&r;
    s->printshape();
    s=&t;
    s->printshape();
}
