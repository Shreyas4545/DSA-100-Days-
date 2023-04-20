#include<iostream>
using namespace std;
class employee{
private:
    int empid;
    string empname;
    float empsal;
    float empbonus;
    string emptype;
public:
    employee(int a,string b,float c,float d,string e){
       empid=a;
       empname=b;
       empsal=c;
       empbonus=d;
       emptype=e;
    }
    void print(int empid,float c)
    {
        cout<<empid<<" "<<empsal<<endl;
    }
    void print(string b)
   {
       cout<<empname<<endl;
   }
   void print(float d)
   {
       cout<<"Before Paying the Bonus"<<endl;
       cout<<empsal<<endl;
       cout<<(empbonus*100)<<endl;
       cout<<"After paying the Bonus"<<endl;
       if(emptype=="A"){
       cout<<(empsal+empbonus*100)<<endl;
       }
       else if(emptype=="B")
       {
           cout<<(empsal+empbonus*100)<<endl;
       }
       else if(emptype=="C")
       {
           cout<<(empsal+empbonus*100)<<endl;
       }
   }

};
int main()
{
    employee e1(10,"Shreyas",1000.2,5.3,"A");
    employee e2(10,"Darshan",1500.2,6.3,"B");
    employee e3(10,"Priyansh",2000.2,7.3,"C");
    cout<<"For employee Shreyas"<<endl;
    e1.print(10,1000.2);
    e1.print("Shreyas");
    e1.print(5.3);
    cout<<"For employee darshan"<<endl;
    e2.print(10,1500.2);
    e2.print("Darshan");
    e2.print(6.3);
}

