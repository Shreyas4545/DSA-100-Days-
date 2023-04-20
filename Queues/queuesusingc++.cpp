#include<bits/stdc++.h>
using namespace std;
#define n 5
class queue1{
public:
    int*arr;
    int front;
    int back;
     queue1()
    {
        arr=new int[n];
        front=back=-1;
    }
    void enqueue(int x)
    {
        if(back==n-1)
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1)
        {
            front++;
        }
    }
    int pop()
    {
        if(front==-1 && front>back)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int a=arr[front];
        front++;
        return a;
    }
    int peek()
    {
        if(front==-1 || front>back)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        if(front==-1 || front>back)
        {
            return 1;
        }
       return 0;
    }
    bool full()
    {
        if(back==n-1)
        {
            return 1;
        }
        return 0;

    }
};
void display(queue1 q)
{
    for(int i=q.front;i<=q.back;i++)
    {
        cout<<q.arr[i]<<" ";
    }
}
int main()
{
    queue1 q;
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
     q.enqueue(b[i]);
    display(q);
    cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.full()<<endl;
    cout<<q.empty()<<endl;
    return 0;
}
