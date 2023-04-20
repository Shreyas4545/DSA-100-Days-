#include<iostream>
using namespace std;
//The c++ code can also simulate moving the point object to any position in the 2D plane
class point{
public:
    int x;
    int y;
public:
  void pointset(int a,int b)
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
  void movePoint(int a,int b)
  {
      x+=a;
      y+=b;
  }
};
int main()
{
    point P;
    P.pointset(10,20);
    cout<<P.getx()<<endl<<P.gety()<<endl;
    P.movePoint(10,10);
     cout<<P.getx()<<endl<<P.gety()<<endl;
    return 0;
}
