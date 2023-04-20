#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
struct Node*left;
struct Node*right;
int data;
Node(int val)
{
    data=val;
    left=right=NULL;
}
}*node;
node root=NULL;
void insertnode(int key)
{
    node p;
    node r=NULL;
    node t=root;
     if(root==NULL)
    {
        p=new Node(key);
        root=p;
        return;
    }
    while(t)
    {
        r=t;
        if(key>t->data)
        {
            t=t->right;
        }
        else if(key<t->data){
            t=t->left;
        }
    }
    p=new Node(key);
    p->left=NULL;
    p->right=NULL;
    if(key<r->data)
    {
        r->left=p;
    }
    else if(key>r->data)
        {
        r->right=p;
    }
}
/*int treefrompreorder(int pre[],int n)
{
    stack<node>s;
    int i=0;
    node t;
    node x;
    root=new Node(pre[i++]);
    node p=root;
    while(i<n)
    {
        if(pre[i]<p->data)
        {
            t=new Node(pre[i++]);
            p->left=t;
            s.push(p);
            p=t;
        }
        else{
            if(pre[i]>p->data && pre[i]<s.top()->data)
            {
                t=new Node(pre[i++]);
                p->right=t;
                p=t;
            }
            else{
               x->data=s.pop();
               p=x;
            }
        }
    }
}*/
void levelorder(node root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node a=q.front();
        q.pop();
        if(a!=NULL){
       cout<<a->data;
        if(a->left)
        {
            q.push(a->left);
        }
        if(a->right)
        {
            q.push(a->right);
        }
        }
        else if(!q.empty())
        {
            q.push(NULL);
        }
    }
}

void preorder(node root)
{
    //p=root;
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        insertnode(a[i]);
    }
    //preorder(root);
    /*int pre[3]={10,5,20};
    treefrompreorder(pre[],3);
    preorder(root);*/
    levelorder(root);
    return 0;

}
