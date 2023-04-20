#include<iostream>
using namespace std;
class point{
public:
    int x;
    int y;
    void setpoint(int a,int b)
    {
        x=a;
        y=b;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    void movepoint(int a,int b)
    {
        x+=a;
        y+=b;
    }
};
int main()
{
    point p1;
    p1.setpoint(10,20);

    p1.movepoint(5,5);
    cout<<p1.getx()<<endl<<p1.gety()<<endl;
    return 0;

}
