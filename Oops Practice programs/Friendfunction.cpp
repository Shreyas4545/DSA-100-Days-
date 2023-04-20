#include<iostream>
using namespace std;
/*class box{
private:
    int length;
public:
    box(int a):length(a){};
    friend int print(box);
};
int print(box b)
{
    return b.length;
}
int main()
{
    box b1(10);
    cout<<print(b1);
    return 0;
}*/
/*class B;
class A{
public:
    int x;
    A(int c):x(c){};
    friend int max1(A,B);
};
class B{
public:
    int y;
    B(int d):y(d){};
    friend int max1(A,B);
};
int max1(A a,B b)
{
    if(a.x>b.y)
    {
        cout<<a.x<<endl;
    }
    else{
       cout<<b.y<<endl;
    }
}
int main()
{
    A a(10);
    B b(20);
    max1(a,b);
    return 0;
}
*/
class A{
public:
    int a;
    A(int x):a(x){};
    void print()
    {
        cout<<a<<endl;
    }
    friend class B;
};
class B{
public:
    B(){};
    void print1(A&i)
    {
        cout<<i.a<<endl;
    }
};

int main()
{
    A a1(10);
    B b;
    b.print1(a1);
}


