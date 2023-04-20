#include<bits/stdc++.h>
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
void deleteatfirst(node*&head)
{
    node*temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    node*p=head;
    temp->next=head->next;
    head=head->next;
    delete(p);
}
void deletion(node*&head,int pos)
{
    if(pos==1)
    {
        deleteatfirst(head);
        return;
    }
    int count=1;
    node*temp=head;
    while(count!=pos-1)
    {
        temp=temp->next;
        count++;
    }
    node*p=temp->next;
    temp->next=temp->next->next;
    delete p;
}
void insertatbegin(node*&head,int val)
{
    node*n=new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node*temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}
void insertattail(node*&head,int val)
{
    if(head==NULL)
    {
        insertatbegin(head,val);
        return;
    }
    node*n=new node(val);
    node*temp=head;
         while(temp->next!=head)
          {
              temp=temp->next;
          }
    temp->next=n;
    n->next=head;
}
void convert(node*&head)
{
    node*a=head;
    node*b=head->next;

}
void display(node*head)
{
    node*temp=head;
    do
    {
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
    }while(temp!=head);

}
int main()
{
    node*head=NULL;
    insertattail(head,10);
    insertattail(head,20);
    insertattail(head,30);
    insertattail(head,40);
    //deletion(head,1);
    //deletion(head,1);
    //deleteatfirst(head);
    //deleteatfirst(head);
    display(head);
    return 0;
}

