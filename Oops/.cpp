#include<iostream>
using namespace std;
class Ba{
private:
    int ban;
    int bab;
public:
    void setb(int n)
    {
        ban=n;
    }
    void setba(int m)
    {
        bab=m;
    }
    int get()
    {
        return ban;
    }
    int get1()
    {
        return bab;
    }
};
int main()
{
    Ba b1,b2;
    b1.setb(100);
    b1.setba(500);
    cout<<b1.get()<<b1.get1()<<endl;
}
