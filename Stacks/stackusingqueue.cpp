#include<bits/stdc++.h>
using namespace std;
class stack1{
public:
    int N;
    queue<int>q1;
    queue<int>q2;
    void push(int x)
    {
        q2.push(x);
        N++;
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
          queue<int>temp=q1;
    q1=q2;
    q2=temp;
    }

   void pop()
    {
       q1.pop();
       N--;
    }
    int top(){
    return q1.front();
    }
};
int main()
{
    stack1 s;
    s.push(10);
    s.push(20);
    cout<<s.top()<<endl;
}
