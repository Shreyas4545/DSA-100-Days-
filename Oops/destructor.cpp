#include<bits/stdc++.h>

using namespace std;

  class codespeedy
{
   int x;
   int y;

     public :

     codespeedy()
    {
        x=10;
        y=20;

        cout<<"Object is being created"<<endl;
    }

      void show()
    {
        cout<<"value of x is :"<<x<<endl;
        cout<<"value of y is :"<<y<<endl;
    }

      ~codespeedy()
    {
        cout<<"object is being deleted"<<endl;
    }
};
  int main()
{
    codespeedy c;

     c.show();
}
