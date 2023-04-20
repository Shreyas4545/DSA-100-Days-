#include<bits/stdc++.h>
using namespace std;
template<typename d>
class summ{
public:
    d x;
    d y;
    d res;
    summ(){};
    summ(d a,d b)
    {
        x=a;
        y=b;
    }
    void setno()
    {
        cin>>x;
        cin>>y;
    }
    void add();
    void display()
    {
        cout<<x<<":"<<y<<":"<<res<<endl;
    }
};
template<typename T>
void summ<T>::add()
{
    res=x+y;
    cout<<res<<endl;
}
int main()
{
    summ<int>s(10,20);
   // s.setno();
    s.add();
    return 0;
}
