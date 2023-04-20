#include<iostream>
using namespace std;
class contact{

public:
     long long cellno;
     string contactname;

};
int main()
{
    contact c[100];
    c[1].cellno=8792169865;
    c[1].contactname="Shreyas";
    c[2].cellno=9731994885;
    c[2].contactname="Amit";
     c[3].cellno=9945580055;
    c[3].contactname="Santosh";
     c[4].cellno=8123051597;
    c[4].contactname="Varun";
     c[5].cellno=8971343208;
    c[5].contactname="Suhas";
    cout<<"contact 1"<<endl<<c[1].cellno<<endl;
    cout<<c[1].contactname<<endl;
    cout<<endl;
    cout<<"contact 2"<<endl<<c[2].cellno<<endl;
    cout<<c[2].contactname<<endl;
    cout<<endl;
     cout<<"contact 3"<<endl<<c[3].cellno<<endl;
    cout<<c[3].contactname<<endl;
    cout<<endl;
    cout<<"contact 4"<<endl<<c[4].cellno<<endl;
    cout<<c[4].contactname<<endl;
    cout<<endl;
    cout<<"contact 5"<<endl<<c[5].cellno<<endl;
    cout<<c[5].contactname<<endl;
    cout<<endl;
    return 0;

}
