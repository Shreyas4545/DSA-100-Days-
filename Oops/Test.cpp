#include<iostream>
using namespace std;
class bankaccount{
private:
    int accno;
    double accbal;
public:
    bankaccount()
    {
        accno=0;
        accbal=0;
    }
    bankaccount(int n,double b)
    {
        accno=n;
        accbal=b;
    }
    void debitaccount(double amt)
    {
        accbal-=amt;
    }
    void creditaccount(double amt)
    {
        accbal+=amt;
    }
    void printaccount()
    {
        cout<<accno<<":"<<accbal<<endl;
    }

};
class customer{
private:
    int custid;
    string name;
public:
    bankaccount*ba;
    customer(){
    custid=0;
    name="";
    }
    customer(int id,string n)
    {
        custid=id;
        name=n;
    }
    void printcustomer(){
    cout<<custid<<":"<<name<<endl;
    ba->printaccount();
    }

};

int main()
{
  customer c1(1,"a");
  c1.ba=new bankaccount(1001,1000);
  c1.printcustomer();

}
