#include<iostream>
#include<math.h>
using namespace std;
class Quad{
 public:
     int a,b,c,d;
     void getpoint()
     {
         cout<<"Enter the four sides of quadrilateral"<<endl;
         cin>>a>>b>>c>>d;
     }
     string identify()
     {
         if(a==b && b==c && c==d && d==a)
         {
             cout<<"This is square"<<endl;
             return "square";
         }
         else if(a==c  && b==d)
         {
             cout<<"This is rectangle"<<endl;
             return "rectangle";
         }
         else{
            return "cannot identify";
         }
      }
      int areaofquadrilateral()
      {
          int area;
          if(this->identify()=="square")
          {
              area=a*a;
              return area;
          }
          else if(this->identify()=="rectangle")
          {
              area=a*b;
              return area;
          }
      }
      void perimeter()
      {
          int perimeter;
          perimeter=a+b+c+d;
          cout<<"Perimeter is:"<<perimeter<<endl;
      }
      double diagonalofQ()
      {
          double diagonal;
          if(this->identify()=="square")
          {
              diagonal=sqrt((a*a)+(a*a));
              return diagonal;
          }
          else if(this->identify()=="rectangle")
          {
              diagonal=sqrt((a*a)+(b*b));
              return diagonal;
          }
      }
 };
 int main()
 {
     Quad s1;
     s1.getpoint();
     string quadname=s1.identify();
     cout<<quadname<<endl;
     s1.perimeter();
     int area=s1.areaofquadrilateral();
     cout<<area<<endl;
     double diagonal=s1.diagonalofQ();
     cout<<diagonal<<endl;
     return 0;
 }
