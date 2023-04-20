#include<iostream>
using namespace std;
class complexn{
private:
    int real;
    int imaginary;
public:
    complexn(int r=0,int i=0)
    {
        real=r;
        imaginary=i;
    }
    complexn add(complexn x)
    {
        complexn temp;
        temp.real=real+x.real;
        temp.imaginary=imaginary+x.imaginary;
        return temp;
    }
    void print()
    {
        cout<<real<<" "<<imaginary<<endl;
    }
};
int main()
{
    complexn C1(10,50);
    complexn C2(20,30);
    complexn C3;
    C3=C1.add(C2);
    C3.print();
    return 0;

}
