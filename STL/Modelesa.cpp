#include<bits/stdc++.h>
using namespace std;
class vehicle{
public:
    int no;
    string status;
    vehicle(){};
    vehicle(int a,string b):no(a),status(b){}
    virtual void print()
    {
    cout<<no<<":"<<status<<endl;
    }
    void rented()
    {
        if(status=="Yes"){
        cout<<no<<":"<<status<<endl;
        }
    }
    void nonrented()
    {
        if(status=="No"){
        cout<<no<<":"<<status<<endl;
        }
    }
};

int main()
{
    list<vehicle>l1;
    vehicle v1(1,"Yes");
    vehicle v2(2,"No");
    vehicle v3(3,"Yes");
    l1.push_back(v1);
    l1.push_back(v2);
    l1.push_back(v3);
    auto it=l1.begin();
    while(it!=l1.end())
    {
        it->rented();
        it++;
    }
    while(it!=l1.end())
    {
        it->nonrented();
        it++;
    }
    return 0;
}
