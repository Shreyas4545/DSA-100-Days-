#include<iostream>
using namespace std;
class address{
public:
    string city;
    string country;
    address(string a,string b)
    {
        this->city=a;
        this->country=b;
    }
    void print()
    {
        cout<<city<<" "<<country<<endl;
    }
};
class student{
public:
    address* ad;
    int roll;
    string name;
    student(int a,string b){
    this->roll=a;
    this->name=b;
    }
    void print()
    {
        cout<<roll<<endl<<name<<endl;
        ad->print();
    }
};
int main()
{
    student s1(5,"Shreyas");
    student s2(6,"Apeksha");
    s1.ad=new address("ABC","India");
    s2.ad=new address("DEF","USA");
    s1.print();
    s2.print();
    return 0;
}
