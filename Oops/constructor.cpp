#include<iostream>
using namespace std;
class point{
private:
    int x,y;
public:
    point():x(0),y(0){}
    point(int a,int b)
    {
     x=a;
     y=b;
    }
    point(const point&point)
    {
    cout<<"copy constructor is invoked"<<endl;
     x=point.x;
     y=point.y;
    }
    void printpoint()
    {
        cout<<x<<":"<<y<<endl;
    }
};
int main()
{
    point p1(10,10);
    point p2(p1);
    p1.printpoint();
    p2.printpoint();
}
