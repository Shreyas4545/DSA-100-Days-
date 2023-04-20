#include<iostream>
using namespace std;
class node{
public:
    int data;
    node*next;
    node*prev;
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertatbegin(node*&head,int val)
{
    node*n=new node(val);
    n->next=head;
    if(head!=NULL)
     head->prev=n;
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
        n->prev=temp;
}
void display(node*head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int length(node*head)
{
    int l=0;
    node*temp=head;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}
void intersect(node*&head1,node*&head2,int pos)
{
    node*temp1=head1;
    pos--;
    while(pos--)
    {
        temp1=temp1->next;

    }
    node*temp2=head2;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

int intersection(node*&head1,node*&head2)
{
    node*ptr1;
    node*ptr2;
    int d=0;
    int l1=length(head1);
    int l2=length(head2);
    if(l1>l2)
    {
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d)
    {
        ptr1=ptr1->next;
        if(ptr1==NULL)
        {
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1==ptr2)
        {
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}
node*appendknodes(node*&head,int k)
{
   node*newhead;
   node*newtail;
   node*temp=head;
    int count=1;
    int l=length(head);
   k=k%l;
         while(temp->next!=NULL)
         {
             if(count==l-k)
             {
                 newtail=temp;
             }
             if(count==l-k+1)
             {
                 newhead=temp;
             }
             temp=temp->next;
             count++;
         }
         newtail->next=NULL;
         temp->next=head;
         return newhead;

}
void deleteatfirst(node*&head)
{
    node*first=head;
    head=head->next;
    head->prev=NULL;
    delete(first);
}
void deleteanode(node*&head,int pos)
{
    if(pos==1)
    {
        deleteatfirst(head);
    }
    node*temp=head;
    int count=1;
    while(temp!=NULL && count!=pos)
    {
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
     temp->next->prev=temp->prev;
     delete temp;
}
int main()
{
    node*head1=NULL;
    node*head2=NULL;
    insertattail(head1,1);
    insertattail(head1,2);
    insertattail(head1,3);
    insertattail(head1,4);
    insertattail(head1,5);
    insertattail(head1,6);
    insertattail(head2,9);
    insertattail(head2,10);
    intersect(head1,head2,3);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2)<<endl;
    //deleteanode(head,4);
    //deleteanode(head,3);
    //display(head);
    //ode*newhead=appendknodes(head,3);
    //display(newhead);

}
