#include<iostream>
using namespace std;
namespace myspace1{
int a;
void printstring(string name)
{
    cout<<"Hello,welcome"<<name<<endl;
}
}

int main()
{
    int a=10;
    cout<<"a="<<a<<endl;
    string name;
    //cout << "Hello world and welcome!" << endl;
    myspace1::a=100;
    cout<<"myspace1::a="<<myspace1::a<<endl;
    myspace1::printstring(" shreyas");
    return 0;
}
