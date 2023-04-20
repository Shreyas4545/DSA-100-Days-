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
        n->next=NULL;
        head=n;
    }
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=NULL;
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
         while(temp->next!=NULL)
          {
              temp=temp->next;
          }
    temp->next=n;
    n->next=NULL;
}
void convert(node*&head)
{
    node*a=head;
    node*b=head->next;
    node*c=b;

        while(a->next!=NULL && b->next!=NULL)
        {
            a->next=b->next;
            a=a->next;
            b->next=a->next;
            b=b->next;
        }
        a->next=c;
        if(a->next!=NULL)
        {
            b->next=NULL;
        }
}
void display(node*head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
    }

}
int main()
{
    node*head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    {
        insertattail(head,arr[i]);
    }
    /*insertatbegin(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);*/
    display(head);
    convert(head);
    display(head);
    return 0;
}
