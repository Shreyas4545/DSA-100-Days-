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
void insertattail(node*&head,int val)
{
    node*n=new node(val);
    if(head==NULL)
    {
        head=n;
    }
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(node*head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node*head=NULL;
    insertattail(head,10);
    insertattail(head,20);
    insertattail(head,30);
    insertattail(head,40);
    display(head);

}
