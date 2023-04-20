#include<iostream>
using namespace std;
class invalidweight{
    public:
    string msg;
    invalidweight(string a):msg(a){}
    const string show()
    {
        return msg;
    }
};

class courier{
public:
    int id;
    string from;
    string to;
    int weight;
    int price;
    courier(int a,string b,string c,int d,int e):id(a),from(b),to(c),weight(d),price(e){};

    int getweight()
    {
        if(weight>100)
        {
            throw invalidweight("Weight cannot be Greater than 100 !");
        }
        return weight;
    }
    void print()
    {
        cout<<id<<":"<<from<<":"<<to<<":"<<weight<<":"<<price<<endl;
    }

};
class paper:public courier{
public:
    string type;
    paper(string x,int a,string b,string c,int d,int e):type(x),courier(a,b,c,d,e){};
    void calc(){
    if(type=="Letter" && weight==10)
    {
        price+=5;
    }
    else if(type=="book" && weight==20)
    {
        price+=100;
    }
    }
    void print()
    {
        courier::print();
    }
};
class material:public courier{
public:
    int height;
    int width;
    material(int a,string b,string c,int d,int e,int f,int g):courier(a,b,c,d,e),height(f),width(g){};
    int volume()
    {
        return height*width;
    }
    void getprice()
    {
        int x=volume();
      if(x>10 && weight<50)
      {
          price+=30;
      }
    }
    void print()
    {
        courier::print();
    }

};
int main()
{

    /*cout<<C.getprice()<<endl;
    C.print();
    paper p1("book",2,"C","D",20,55);
    p1.calc();
    p1.print();*/
    try{
    courier C(1,"A","B",300,50);
    C.getweight();
    material m(3,"E","F",30,50,15,15);
    cout<<m.volume();
    m.getprice();
    m.print();
    }
    catch(invalidweight&i)
    {
        cout<<i.show()<<endl;
    }
    return 0;
}
