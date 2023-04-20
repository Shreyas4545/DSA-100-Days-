#include<iostream>
using namespace std;
class bankaccount
{
    public:
    int id;
    double bal;
    bankaccount()
    {
        id=0;
        bal=0;
    }
    bankaccount(int a,double b)
    {
        this->id=a;
        this->bal=b;
    }
    void debit(double amt)
    {
        bal-=amt;
    }
    void credit(double amt)
    {
        bal+=amt;
    }
    void print()
    {
        cout<<id<<" "<<bal<<endl;
    }
};
class customer{
public:
    bankaccount ba;
    int custid;
    string name;
    customer()
    {
        custid=0;
        name=" ";
    }
    customer(int x,string y,bankaccount ba1)
    {
        this->custid=x;
        this->name=y;
        this->ba=ba1;
    }
    void display()
    {
        cout<<custid<<" "<<name<<endl;
        ba.print();
    }
};
int main()
{
    bankaccount ba(10,1000);
    customer c1(10,"Shreyas",ba);
    c1.display();
    return 0;
}
