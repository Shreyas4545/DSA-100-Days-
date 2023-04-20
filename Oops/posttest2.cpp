#include<stdio.h>
#include<iostream>
using namespace std;
class Base{
public:
    void show()
    {
        cout<<"In base";
    }

};
class Derived:public Base{
public:
    int x;
    void show()
    {
        cout<<"In derived"<<endl;
    }
    Derived()
    {
        x=10;
    }
};
int main(void)
{
    Base *bp,b;
    Derived d;
    bp=&d;
    bp->show();
    cout<<bp->x<<endl;
    return 0;
}
