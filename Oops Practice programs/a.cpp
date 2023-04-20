#include<iostream>
using namespace std;

class customer
{
    public:
   int customerid;
   string customer_n;
   long long phonenum;
   float bill_amount;
   customer(int i=0,string n="", long long pn=0,float ba=0)
   {
       customerid=i;
       customer_n=n;
       phonenum=pn;
       bill_amount=ba;
   }
   virtual void discount()=0;

};
class regular_c:public customer
{
    public:
    regular_c(int i,string n, long long pn,float ba):customer(i,n,pn,ba){};
   void discount()
   {
       bill_amount=bill_amount-bill_amount*(0.05);
       cout<<bill_amount;
   }

};
class privileged_c:public customer
{
    public:
    privileged_c (int i,string n, long long pn,float ba):customer(i,n,pn,ba){};
   void discount()
   {
       bill_amount=bill_amount-bill_amount*(0.07);
       cout<<bill_amount;
   }
};
int main()
{
   regular_c c1(87,"sdffdssd",9878745498,897.57);
   privileged_c c2(98,"dfsf",5654597876,987.68);
   c1.discount();
   c2.discount();

}
