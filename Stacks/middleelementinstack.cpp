#include<iostream>
using namespace std;
class mystack{
    struct Node{
        Node*prev;
        Node*next;
        int data;
         Node(int val)
    {
        this->data=val;
    }
    };
    Node*head=NULL;
    int size=0;
    Node*mid=NULL;
    public:
     void push(int data)
     {
         Node*node=new Node(data);
         if(size==0)
         {
            head=node;
            mid=node;
            size++;
            return;
         }
         head->next=node;
         node->prev=head;
         head=head->next;
         if((size%2)==1)
         {
            mid=mid->next;
         }
        size++;
     }
    int pop()
    {
       int value=-1;
       if(size!=0)
       {
        value=head->data;
          if(size==1)
          {
            head=NULL;
            mid=NULL;
          }
          else{
            head=head->prev;
            head->next=NULL;
            if(size%2==0)
            {
                mid=mid->prev;
            }
          }
       }
       return value; 
    }
    int middle()
    {
        if(size==0)
        {
            return -1;
        }
        return mid->data;
    }
    void deletemiddle()
    {
        if(size!=0)
        {
            if(size==1)
            {
                head=NULL;
                mid=NULL;
            }
            if(size==2)
            {
                head=head->prev;
                mid=mid->prev;
                head->next=NULL;
            }
            else{
                mid->next->prev=mid->prev;
                mid->prev->next=mid->next;
                if(size%2==0)
                {
                    mid=mid->prev;
                }
                else{
                    mid=mid->next;
                }
            }
            size--;
        }
    }
};

int main()
{
mystack st;
st.push(10);
st.push(20);
st.push(30);
// st.push(40);
int a=st.pop();
cout<<st.middle()<<endl;
}