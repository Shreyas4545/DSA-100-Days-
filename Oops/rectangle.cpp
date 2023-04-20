#include<iostream>
using namespace std;
class rectangle{
public:
    int x;
    int y;
    int area()
    {
        return x*y;
    }
    int perimeter()
    {
        return 2*(x+y);
    }

};
int main()
{
    rectangle r1,r2;
    r1.x=10;
    r1.y=10;
    cout<<r1.area()<<endl;
}
