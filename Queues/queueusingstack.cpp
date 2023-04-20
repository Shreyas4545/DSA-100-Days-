#include<bits/stdc++.h>
using namespace std;
class queue1{
stack<int>s1;
stack<int>s2;
public:
    void push1(int x)
    {
        s1.push(x);
    }
    int pop()
    {
        if(s1.empty() && s2.empty())
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int a=s2.top();
        s2.pop();
        return a;
    }
};
int main()
{
    queue1 q;
    q.push1(10);
    q.push1(20);
    q.push1(30);
    q.push1(40);
    cout<<q.pop()<<endl;
    return 0;
}
