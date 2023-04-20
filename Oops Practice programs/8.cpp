#include<bits/stdc++.h>
using namespace std;
class exceptionc{
public:
    string msg;
    exceptionc(string a):msg(a){}
    const string show()
    {
        return msg;
    }
};
class queue1{
public:
    int*arr;
    int front;
    int back;
    queue<int>q;
    void push()
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>10)
        {
            throw exceptionc("Invalid");
        }
        q.push(x);
        }
    }
  int pop()
    {
       int y=q.front();
       q.pop();
       return y;
    }
    int isempty()
    {
if(q.empty())
{
    return 1;
}
else{

    return 4;
}
    }
};
int main()
{
    queue1 q1;
    try{q1.push();
    }
    catch(exceptionc&i)
    {
        cout<<i.show()<<endl;
    }
    int a,b;
    a=q1.pop();
    b=q1.pop();
    cout<<q1.isempty();
    return 0;
}
