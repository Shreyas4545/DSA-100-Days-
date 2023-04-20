#include<iostream>
using namespace std;
#define n 100
class stack{
int*arr;
int top;
public:
    stack()
    {
        arr=new int[n];
        top=-1;
    }
    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"Stack is full"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Empty"<<endl;
        }
        top--;
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"No element in the stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    /*bool empty()
    {
        if(top==-1)
        {
            return 1;
        }
        else{
            return 0;
        }*/
};
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    //st.pop();
    cout<<st.Top()<<endl;

    return 0;
}
