#include<iostream>
using namespace std;
class employee{
public:
    string name;
    int salary;
  employee(){
  name="";
  salary=0;
  }
  employee(string a,int y)
  {
      name=a;
      salary=y;
  }
  void print()
  {
      cout<<name<<":"<<salary<<endl;
  }
};
class manager:public employee{
public:
    int stocks;
    manager(){
    stocks=0;
    };
    manager(string a,int b,int c):employee(a,b),stocks(c){};
    void hike(float percentage)
    {
        salary= salary + (percentage/100*salary)+(stocks*10);
    }
    void print()
    {
        employee::print();
    }
};
class normal:public employee{
public:
    normal(){};
    normal(string a,int b):employee(a,b){};
    employee*e[3];
    void hike(float percentage,normal n[])
    {
        for(int i=0;i<3;i++){
        n[i].salary= n[i].salary + (percentage/100*n[i].salary);
        }
    }
    void print()
    {
        employee::print();
    }
};
int main()
{
    manager m("Shreyas",1000,10);
    m.hike(20.00);
    m.print();
    normal e1("A",150),e2("B",200),e3("C",250);
    normal n[]={e1,e2,e3};
    normal N;
       N.hike(20.00,n);
       for(int i=0;i<3;i++){
        n[i].print();
       }
    return 0;
}
