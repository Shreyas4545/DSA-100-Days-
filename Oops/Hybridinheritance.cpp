#include<iostream>
using namespace std;
class A{
protected:
    int a;
    int get()
    {
      cin>>a;
    }
};

class B:public A{
protected:
    int b;
    int getb()
    {
        cin>>b;
    }
};
class C{
protected:
    int c;
    int getc()
    {
       cin>>c;
    }
};
class D:public B,public C{
public:
    void display()
    {

    get();
    getb();
    getc();
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    }
};
int main()
{
    D d;
    d.display();
    return 0;
}
