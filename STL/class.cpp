#include<bits/stdc++.h>
using namespace std;
class ba{
public:
    int accno;
    float bal;
    ba(int a,float b):accno(a),bal(b){};
    void credit(float x)
    {
        bal+=x;
    }
    void debit(float y)
    {
        bal-=y;
    }
};
int main()
{
    ba b1(1,100);
    ba b2(2,200);
    vector<ba>v;
     b1.credit(100);
    v.push_back(b1);
    v.push_back(b2);
    /*for(int i=0;i<v.size();i++)
    {
        cout<<v[i].bal<<endl;
    }*/
    vector<ba>::iterator it;
    for( it=v.begin();it!=v.end();it++)
    {
        cout<<it->bal<<endl;
    }
    return 0;
}
