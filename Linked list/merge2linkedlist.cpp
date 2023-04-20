#include<bits/stdc++.h>
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
    cout<<endl;
}
node*mergetwolists(node*&head1,node*&head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    else{
        return head1;
    }
    node*ptr1=head1;
    node*ptr2=head2;
    node*newone=new node(-1);
    node*ptr3=newone;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data<ptr2->data)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
          while(ptr1!=NULL)
          {
              ptr3->next=ptr1;
            ptr1=ptr1->next;
            ptr3=ptr3->next;
          }
          while(ptr2!=NULL)
          {
              ptr3->next=ptr2;
              ptr2=ptr2->next;
              ptr3=ptr3->next;
          }
          return newone->next;
}
node*recursive(node*&head1,node*&head2)
{
    node*result;
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    if(head1->data<head2->data)
    {
        result=head1;
        result->next=recursive(head1->next,head2);
    }
    else{
        result=head2;
        result->next=recursive(head1,head2->next);
    }

    return result;
}
int main()
{
    node*head1=NULL;
    node*head2=NULL;
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    sort(arr1,arr1+n);
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    sort(arr2,arr2+n);
    for(int i=0;i<n;i++)
    {
        insertattail(head1,arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
        insertattail(head2,arr2[i]);
    }
    display(head1);
    display(head2);
    node*newhead=recursive(head1,head2);
    display(newhead);
    return 0;

}
