#include<iostream>
using namespace std;
class bankaccount{
public:
    int accno;
    float bal;
    bankaccount(int a,float b):accno(a),bal(b){};
    void print()
    {
        cout<<accno<<endl<<bal<<endl;
    }
};
class customer{
public:
    int id;
    string name;
    bankaccount ba1;
    customer(int a,string b,bankaccount ba):id(a),name(b),ba1(ba){};
    void debit(float c)
    {
        ba1.bal-=c;
    }
    void credit(float d)
    {
        ba1.bal+=d;
    }
    void transfer(bankaccount&ba,float amt)
    {
        ba1.bal-=amt;
        ba.bal+=amt;
    }
    void print(customer c)
    {

        cout<<c.id<<endl<<c.name<<endl;
        c.ba1.print();
    }

};
int main()
{
    bankaccount ba1(100,1000);
    bankaccount ba2(101,2000);
    customer c1(1,"Shreyas",ba1);
    customer c2(2,"Amit",ba2);
    /*c1.credit(100);
    c1.print(c1);
    c2.debit(100);
    c2.print(c2);*/
    c2.transfer(c1.ba1,100);
    c1.print(c1);
    c2.print(c2);
    return 0;
}
