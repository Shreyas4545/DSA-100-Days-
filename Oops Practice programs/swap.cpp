#include<iostream>
using namespace std;
class point{
public:
    int x;
    int y;
    static int counter;
    point(int a,int b):x(a),y(b){};
    void swapp(point&p,int c,int d)
    {
        x=c;
        y=d;
    }
    void print()
    {
        cout<<x<<endl<<y;
    }
};
int point::counter=0;
int main()
{
    point p1(10,20);
    point p2(30,40);
    p1.swapp(p2,30,40);
    p2.swapp(p1,10,20);
    p1.print();
    p2.print();
    return 0;
}
