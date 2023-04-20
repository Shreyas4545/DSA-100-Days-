#include<bits/stdc++.h>
using namespace std;
class A{
public:
    void print()
    {
        cout<<"Hello"<<endl;
    }
};
class B{
public:
    void printB()
    {
        cout<<"World"<<endl;
    }
};
class C:public A,public B{
public:
};
int main()
{
    C o;
    o.print();
    o.printB();
    return 0;
}
