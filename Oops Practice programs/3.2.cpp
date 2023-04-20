#include<iostream>
using namespace std;
class customer
{
public:
    int custid;
    string name;
    long long no;
    float amt;
    float billamt;
    customer(){
    custid=0;
    name="";
    no=0;
    }
    customer(int a,string b,long long c,float d){
        custid=a;
        name=b;
        no=c;
        amt=d;
    }
    //virtual void paybill()=0;
    //virtual void getno()=0;
    virtual void print()
    {
        cout<<custid<<endl<<name<<endl<<no<<endl<<amt<<endl;
    }
};
class privi:public customer{
public:
    static int counter;
    privi(int a,string b,long long c,float d):customer(a,b,c,d){
    counter++;
    };
    void getno()
    {
        cout<<counter<<endl;
    }
    void print()
    {
        customer::print();
    }
};
int privi::counter=0;
class regul:public customer{
public:
     static int counter1;
     regul(){};
      regul(int a,string b,long long c,float d):customer(a,b,c,d){
      counter1++;
      };
      void getno()
      {
          cout<<counter1<<endl;
      }
      void print()
      {
          customer::print();
      }
};
int regul::counter1=0;
class shop{
public:
    int totalamt;
    void paybill(regul r[],float x)
    {
        for(int i=0;i<3;i++)
        {
            r[i].amt=r[i].amt-(0.05*r[i].amt);
            r[i].billamt+=x;
        }
    }
    void print(regul r[])
    {
        for(int i=0;i<3;i++)
        {
            r[i].print();
        }
    }
    void viewindividual(int x,regul r[])
    {
        for(int i=0;i<3;i++)
        {
            if(x==r[i].custid)
            {
                r[i].print();
            }
        }
    }
};
int main()
{
    customer C;
    regul r1(1,"A",8792169865,1000.00),r2(2,"B",9731994885,2000.00),r3(3,"C",8123831667,3000.00);
    regul R1[]={r1,r2,r3};
    regul R;
    shop S;
    S.paybill(R1,100.00);
    S.print(R1);
    S.viewindividual(1,R1);
    return 0;
}
