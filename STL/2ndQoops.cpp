#include<iostream>
using namespace std;
class CourierItem{
public:
    int id;
    string fromaddress;
    string toaddress;
    int weight;
    float price;
    CourierItem():id(0), fromaddress(""), toaddress(""), weight(0), price(0){}
    CourierItem(int a,string b,string c,int d,float e):id(a), fromaddress(b), toaddress(c), weight(d), price(e){}

        void getprice()
        {
            cout<<"Price is:"<<price<<endl;
        }

};
class Paperitem:public CourierItem{
public:
    string typeofdocument;
    void gettypeofdocument()
    {
        cin>>typeofdocument;
    }
    void getprice()
    {
        if(typeofdocument=="BOOK")
        {
        price=price+10.25;
        cout<<price<<endl;
        }
        else if(typeofdocument=="LETTER")
        {
            price+=5.25;
            cout<<price<<endl;
        }
        else{
            price=price+15.25;
            cout<<price<<endl;
        }
    }
};
class materialitem:public CourierItem{
public:
    int l;
    int b;
    int w;
    int vol;

    void get(){
    cin>>l>>b>>w;
    }
    void getvolume()
    {
        vol=l*b*w;
        cout<<vol<<endl;
    }
    void getprice()
    {
        if(vol<1000 && weight<50)
        {
            price+=10.55;
            cout<<price<<endl;
        }
        else if(vol>1000 && vol<2000 && weight>50 && weight<100)
        {
            price+=20.55;
            cout<<price<<endl;
        }
        else{
            price+=30.00;
            cout<<price<<endl;
        }
    }

};
int main()
{
    CourierItem c;
    c.id = 2;
    c.getprice();
    c.weight = 100;
    c.fromaddress= "hsjf";
    c.toaddress = "jfgh";

    Paperitem p1;
    cout<<"Default price is: "<<endl;
    c.getprice();
    p1.gettypeofdocument();
    p1.getprice();
    materialitem m1;
    m1.get();
    m1.getvolume();
    m1.getprice();
    return 0;
}
