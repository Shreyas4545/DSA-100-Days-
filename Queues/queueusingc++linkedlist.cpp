#include<iostream>
using namespace std;
class node{
public:
    node*next;
    int data;
    node(int x)
    {
        data=x;
     next=NULL;
    }
};
class queue1{

    node*front;
    node*back;
public:
    queue1()
    {
        front=NULL;
        back=NULL;
    }
    void push(int val)
    {
        node*n=new node(val);
        if(front==NULL){
           front=n;
           back=n;
           return;
        }
        back->next=n;
        back=n;
    }
    void pop()
    {
        if(front==NULL)
        {
            cout<<"Empty it is"<<endl;
            return;
        }
        node*a=front;
        front=front->next;
        delete a;
    }
    int peek()
    {
        if(front==NULL)
        {
            cout<<"Empty"<<endl;
            return -1;
        }
        return front->data;
    }
    bool empty()
    {
        if(front==NULL)
        {
            return 1;
        }
        return 0;
    }
};
int main()
{
    queue1 q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
    return 0;
}
