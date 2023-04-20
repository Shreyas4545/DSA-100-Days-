#include<iostream>
using namespace std;
class node{
public:
    int data;
    node*next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertattail(node* &head,int val)
{
    node*n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void insertatbegin(node*&head,int val)
{
   node*n=new node(val);
   n->next=head;
   head=n;
}
node*reversell(node*&head)
{
    node*prevptr=NULL;
    node*curptr=head;
    node*nxtptr;
    while(curptr!=NULL)
    {
        nxtptr=curptr->next;
        curptr->next=prevptr;
        prevptr=curptr;
        curptr=nxtptr;
    }
    return prevptr;
}
    node *reverseatknodes(struct node* &head, int k)
    {
       node*curptr=head;
       node*prevptr=NULL;
       node*nxtptr;
       int count=0;
       while(curptr!=NULL && count<k)
       {
           nxtptr=curptr->next;
           curptr->next=prevptr;
           prevptr=curptr;
           curptr=nxtptr;
           count++;
       }
       if(nxtptr!=NULL)
        head->next=reverseatknodes(nxtptr,k);
       return prevptr;
    }
    //make a cycle
    void makecycle(node*&head,int pos)
    {
        int count=1;
        node*startnode;
        node*temp=head;
        while(temp->next!=NULL)
        {
            if(count==pos)
            {
                startnode=temp;
            }
            temp=temp->next;
            count++;
        }
        temp->next=startnode;
    }
    //detect a cycle
    bool detectacycle(node*&head)
    {
        node*slow=head;
        node*fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                return 1;
            }
        }
        return 0;
    }

    //removal of cycle
    void removalofcycle(node*&head)
    {
        node*slow=head;
        node*fast=head;
        do{
            slow=slow->next;
            fast=fast->next->next;
        }while(slow!=fast);
        fast=head;
        while(slow->next!=fast->next)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=NULL;


    }
void display(node*head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node*head=NULL;
    insertattail(head,10);
    insertattail(head,20);
    insertattail(head,30);
    insertattail(head,40);
    insertattail(head,50);
    insertattail(head,60);
    display(head);
    //insertatbegin(head,5);
    //insertatbegin(head,3);
    //display(head);
    makecycle(head,5);
    cout<<detectacycle(head)<<endl;
    removalofcycle(head);
    display(head);
    cout<<detectacycle(head)<<endl;
    //node*newhead=reversell(head);
    //display(newhead);
    //int k=2;
    //node*x=reverseatknodes(head,k);
    //display(x);
    return 0;
}
