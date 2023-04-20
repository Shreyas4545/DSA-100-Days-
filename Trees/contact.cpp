#include<iostream>
using namespace std;
class contact{

public:
     long long cellno;
     string contactname;

};
int main()
{
    contact c1,c2,c3,c4,c5;
    c1.cellno=8792169865;
    c1.contactname="Shreyas";
    c2.cellno=9731994885;
    c2.contactname="Amit";
     c3.cellno=9945580055;
    c3.contactname="Santosh";
     c4.cellno=8123051597;
    c4.contactname="Varun";
     c5.cellno=8971343208;
    c5.contactname="Suhas";
    cout<<"contact 1"<<endl<<c1.cellno<<endl;
    cout<<c1.contactname<<endl;
    cout<<endl;
    cout<<"contact 2"<<endl<<c2.cellno<<endl;
    cout<<c2.contactname<<endl;
    cout<<endl;
     cout<<"contact 3"<<endl<<c3.cellno<<endl;
    cout<<c3.contactname<<endl;
    cout<<endl;
    cout<<"contact 4"<<endl<<c4.cellno<<endl;
    cout<<c4.contactname<<endl;
    cout<<endl;
    cout<<"contact 5"<<endl<<c5.cellno<<endl;
    cout<<c5.contactname<<endl;
    cout<<endl;
    return 0;
}

