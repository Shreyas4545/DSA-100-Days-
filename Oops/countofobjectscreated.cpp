#include<iostream>
using namespace std;
class bankaccount{
int accno;
float accbal;
 bankaccount();{
     cin>>accno>>accbal;
 }


 };
 int main()
 {
     bankaccount acc1,acc2(1,2),acc4;
     cout<<"Account:"<<acc1.getobjectcount()<<endl;
     cout<<"Account:"<<acc2.getobjectcount()<<endl;
     cout<<"Account:"<<acc4.getobjectcount()<<endl;
     return 0;
 }
