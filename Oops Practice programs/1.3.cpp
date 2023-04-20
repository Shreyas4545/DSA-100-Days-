#include<iostream>
using namespace std;
class banka{
public:
    int accno;
    float bal;
    banka(int a,float b):accno(a),bal(b){};
     void print()
    {
        cout<<accno<<endl<<bal<<endl;
    }

};
class bank{
public:
    string name;
    string bname;
    string mname;
    banka e[3];
    bank(string a,string b,string c,banka d[],int num){
    name=a;
    bname=b;
    mname=c;
    for(int i=0;i<num;i++)
    {
        e[i]=d[i];
    }
    };
    void pay(float amt)
    {
       for(int i=1;i<=3;i++)
       {
           b[i].bal-=amt;
       }
    }
    void print1()
    {
        cout<<name<<endl<<bname<<endl<<mname<<endl;
        for(int i=1;i<=3;i++)
        {
            b[i]->print();
        }
    }
};
int main()
{
    banka a1(1,100),acc2(2,200),acc3(3,300);
    banka f[]={a1,acc2,acc3};
    bank B("S","M","Shreyas",f,3);
    B.pay(100);
    B.print1();
    return 0;
}
