#include<iostream>
using namespace std;
class shape{
public:
    int l;
    int b;
    shape():l(0),b(0){};
    int getdata(int x,int y)
    {
        l=x;
        b=y;
    }
};
class rectangle:public shape{
public:
    int getarea()
    {
        return l*b;
    }
};
class triangle:public shape{
public:
    int getarea()
    {
        return 0.5*l*b;
    }
};
int main()
{
    rectangle r;
    triangle t;
    int k,g;
    cin>>k>>g;
    r.getdata(k,g);
    cout<<r.getarea()<<endl;
    t.getdata(k,g);
    cout<<t.getarea()<<endl;
    return 0;
}
