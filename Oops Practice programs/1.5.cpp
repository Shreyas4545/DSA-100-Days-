#include<iostream>
using namespace std;
class ba{
public:
    int accno;
    float bal;
    static int counter;
    ba(){
    accno=0;
    bal=0;
    }
    ba(int a,float b):accno(a),bal(b){};
    void p()
    {
        cout<<accno<<":"<<bal<<endl;
    }
};
int ba::counter=0;
class sba:public ba{
public:
    float penaltyamt;
    static int counter1;
    sba(){
    penaltyamt=0;
    counter1=0;
    }
    sba(int a,float b):ba(a,b){
    };
    void credit(float amt)
    {
        bal+=amt;
        counter1++;
    }
    void debit(float amt)
    {
        bal-=amt;
        counter1++;
    }
    void penalty()
    {
        if(counter1>5)
        {
            bal-=200;
            penaltyamt+=200;
        }
    }
    void print()
    {
        ba::p();
        cout<<penaltyamt<<endl;
    }
};
int sba::counter1=0;
int main()
{
    sba S(1,1000);
      S.credit(100);
      S.credit(100);
      S.credit(100);
      S.credit(100);
      S.credit(100);
      S.credit(100);
         S.penalty();
    S.print();
    return 0;
}
