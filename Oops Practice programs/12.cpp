#include<stdio.h>
#include<iostream>

using namespace std;

class employee
{
    public:
    string name;
    float salary;

    employee(string n,float s):name(n),salary(s){}

    virtual void display()
    {}

    virtual float hike()
    {}
};

class normalEmployee: public employee
{
    public:
    normalEmployee(string n,float s):employee(n,s){};  //para constructor

    void display()
    {
        cout<<"NAME:"<<name<<endl;
        cout<<"salary:"<<salary<<endl;

    }

    float hike()
    {
        float per=20;
        int hkn= salary + (salary*0.2);
        return hkn;
    }
} ;

class manager:public employee
{
    public:
    manager(string n,float s):employee(n,s){}   //para constructor

    void display()
    {
        cout<<"NAME:"<<name<<endl;
        cout<<"salary:"<<salary<<endl;
    }
    float hike()
    {
        float per=10;
        salary+= (salary*0.1);
        return salary;
    }
};

int main()
{
    manager m("Ritik",100);
    normalEmployee n("rishav",200);

    cout<<"The manager details is:";
    m.hike();
    m.display();


}
