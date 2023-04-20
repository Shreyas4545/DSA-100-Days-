#include<iostream>
using namespace std;
class ba{
public:
    int no;
    int bal;
    ba(int a,int b):no(a),bal(b){};
    ba createaccount(int a,int b)
    {
        ba temp1(a,b);
        return temp1;
    }
    void print()
    {
        cout<<no<<":"<<bal<<endl;
    }
};
int main()
{
    ba b1(1,100);
    ba b3=b1.createaccount(2,200);
    b3.print();
    return 0;
}
