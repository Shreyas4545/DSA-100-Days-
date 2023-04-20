#include<iostream>
using namespace std;
class addition{
 public:
     int x;
     int y;
     void setv(int a,int b)
     {
         x=a;
         y=b;
     }
     int add(int a,int b)
     {
         return a+b;
     }
     float add(float a,float b)
     {
         return a+b;
     }
     double add(double a,double b)
     {
         return a+b;
     }
     long add(long a,long b)
     {
         return a+b;
     }

};
int main()
{
    addition a1;
    cout<<a1.add(10,10)<<endl;
    cout<<a1.add(10.1,10.1)<<endl;
    cout<<a1.add(10.26783456,10.23448931)<<endl;
    cout<<a1.add(1000000,1000000)<<endl;
}
