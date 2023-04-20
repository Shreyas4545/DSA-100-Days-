#include<iostream>
using namespace std;
class owner{
public:
    string name;
    int id;
    string status;
    owner(){};
    owner(string x,int a):name(x),id(a){};
    virtual void print()
    {
        cout<<name<<endl<<id<<endl<<status<<endl;
    }
};
class car{
public:
    string name;
    int cc;
    string type;
    string gettype()
    {
        cin>>type;
        return type;
    }
    owner o[1];
    car(){};
    car(string a,int b):name(a),cc(b){};
    void print()
    {
        cout<<name<<endl<<cc<<endl;
    }
};
class bikes{
     string name;
     int km;
     string type;
     owner on[1];
     bikes(){};
     bikes(string b,int d):name(b),km(d){};
     void print()
    {
        cout<<name<<endl<<km<<endl;
    }
};
class service{
public:
    string name;
    int hours;
    service(){};
    service(string a,int b):name(a),hours(b){};
    owner o1[1];
    car*c[1];
    bikes*b[1];
    void time(car c[])
    {
      string a;
      cin>>a;
      for(int i=0;i<1;i++){
        if(c[i].cc>30){
      if(a=="spare")
      {
          hours-=1;
          o1[i].status="Done";
      }
      else if(a=="wash")
      {
          hours-=2;
          o1[i].status="Done";
      }
      else if(a=="oiling")
      {
          hours-=2;
          o1[i].status="Done";
      }
      }
      }
    }
    void print()
    {
        for(int i=0;i<1;i++){
       o1[i].print();
        c[i]->print();
        }
    }
};
int main()
{
    service S("A",8);
    owner o("Shreyas",1);
    car c("BMW",40);
    car c1[]={c};
    S.time(c1);
    S.print();
    return 0;
}
