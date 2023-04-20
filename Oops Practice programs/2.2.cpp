#include<iostream>
using namespace std;
class car{
public:
    string name;
    string color;
    int seats;
    int maxspeed;
    int speed;
    car(){
    name="";
    color="";
    seats=0;
    maxspeed=0;
    speed=0;
    };
    car(string a,string b,int c,int d,int e){
    name=a;
    color=b;
    seats=c;
    maxspeed=d;
    speed=e;
    };
    virtual void accelerate(int x)
    {

    }
    virtual void print()
    {
        cout<<name<<":"<<color<<":"<<seats<<":"<<maxspeed<<":"<<speed<<endl;
    }
};
class ferrari:public car{
public:
    ferrari(){};
    ferrari(string a,string b,int c,int d,int e):car(a,b,c,d,e){};
    void accelerate(int x)
    {
        speed+=x;
    }
    void break1(int y)
    {
        speed-=y;
    }
    void print()
    {
        car::print();
    }
};
int main()
{
    ferrari f1("A","X",5,200,50);
    f1.accelerate(20);
    f1.break1(20);
    f1.print();
    return 0;
}
