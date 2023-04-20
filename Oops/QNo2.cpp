#include<iostream>
using namespace std;
class box{
    public:
    int width;
    int length;
    int breadth;
    int volume()
    {
        return width*length*breadth;
    }
};
int main()
{
    box r1;
    r1.width=10;
    r1.length=5;
    r1.breadth=5;
    cout<<"Your box is ready"<<endl<<r1.width<<endl<<r1.length<<endl<<r1.breadth<<endl;
    cout<<"volume is: "<<r1.volume()<<endl;
    return 0;
}

