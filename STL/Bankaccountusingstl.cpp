#include<bits/stdc++.h>
using namespace std;
class ba{
public:
    int no;
    float bal;
    ba(int a,float b):no(a),bal(b){};
    void debit(float x)
    {
        bal-=x;
    }
    void credit(float y)
    {
        bal+=y;
    }
    void print()
    {
        cout<<no<<":"<<bal<<endl;
    }
};
class customer{
public:
    int id;
    string name;
    customer(){};
    customer(int a,string b):id(a),name(b){};
    vector<ba>acc;
    void addaccount(ba&a)
    {
        acc.push_back(a);
    }
    void print1()
    {
        cout<<id<<":"<<name<<endl;
    }
    void creditamount(vector<ba>&acc1,int n,float x)
    {
       for(int i=0;i<acc.size();i++)
       {
           if(acc1[i].no==n)
           {
               acc1[i].credit(x);
           }
       }
    }
    void debitamount(vector<ba>&acc,int n,float y)
    {
        for(int i=0;i<acc.size();i++)
        {
            if(acc[i].no==n)
            {
                acc[i].debit(y);
            }
        }
    }
    void deleteaccount(vector<ba>&ac,int n)
    {
        for(int i=0;i<ac.size();i++)
        {
            if(ac[i].no==n)
            {
                ac.erase(ac.begin()+n);
            }
        }
    }
};
int main()
{
    ba b1(1,100),b2(2,200),b3(3,300);
    customer c1(10,"Shreyas");
    c1.addaccount(b1);
    c1.addaccount(b2);
    c1.addaccount(b3);
    c1.creditamount(c1.acc,1,50);
    //c1.debitamount(c1.acc,1,50);
    //c1.acc[0].print();
    for(int i=0;i<c1.acc.size();i++)
    {
        c1.acc[i].print();
    }
    c1.deleteaccount(c1.acc,2);
    cout<<c1.acc.size()<<endl;
    return 0;
}
