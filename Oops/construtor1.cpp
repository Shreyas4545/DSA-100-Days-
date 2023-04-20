#include<iostream>
using namespace std;
class rect{
private:
    int length;
    int breadth;
public:
    /*rect(){
    length=0;
    breadth=0;
    }*/
    rect(int x,int y){
    setl(x);
    setb(y);
    }
    rect(rect&r)
    {
        length=r.length;
        breadth=r.breadth;
    }
    void setl(int l)
    {
        if(l>0)
        {
            length=l;
        }
        else{
            length=1;
        }
    }
    void setb(int b)
    {
        if(b>0)
        {
            breadth=b;
        }
        else{
            breadth=1;
        }
    }

    int getl()
    {
        return length;
    }
    int getb()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
};
int main()
{
    rect r(10,5);
    //r.setl(10);
    //r.setb(20);
    rect r2(r);
    cout<<r2.area()<<endl;
}
