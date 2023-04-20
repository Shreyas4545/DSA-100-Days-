#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
struct Node*left;
struct Node*right;
int data;
Node(int val)
{
    data=val;
    left=NULL;
    right=NULL;
}
}*node;
node root=NULL;
void ipreorder(node p)
{
    stack<node>s;
    while(p || !s.empty())
    {
        if(p)
        {
            cout<<p->data;
            s.push(p);
            p=p->left;
        }
        else{
            p=s.top();
            s.pop();
            p=p->right;
        }
    }
}
void iinorder(node p)
{
    stack<node>s;
    while(p || !s.empty())
      if(p)
      {
         s.push(p);
           p=p->left;
      }
       else{
      p=s.top();
      s.pop();
      cout<<p->data;
      p=p->right;
      }
}
void ipostorder(node p)
{
    stack<node>s;
    while(p || s.empty()){
    if(p)
    {
        s.push(p);
        p=p->left;
    }
    else{
        p=s.top();
        s.pop();
        p=p->right;
        cout<<p->data;
    }
    }

}
void postorder(node p)
{
    if(p==NULL)
    {
        return;
    }
    postorder(p->left);
    postorder(p->right);
    cout<<p->data<<" ";
}
void insertnode(int key)
{
   node t=root;
    node p;
    node r=NULL;
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
    if(key<r->data)
    {
        r->left=p;
    }
    else if(key>r->data)
        {
        r->right=p;
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
void inorder(node root)
{
 if(root==NULL)
 {
     return;
 }
 inorder(root->left);
 cout<<root->data<<" ";
 inorder(root->right);
}
/*void postorder(node root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}*/
void mirrortree(node n)
{
if(n==NULL)
{
    return;
}
queue<node>q;
q.push(n);
while(!q.empty())
{
    int n=q.size();
    for(int i=0;i<n;i++)
    {
        node cur=q.front();
        q.pop();
        swap(cur->left,cur->right);
        if(cur->left)
        {
            q.push(cur->left);
        }
        if(cur->right)
        {
            q.push(cur->right);
        }
    }
}
}
int sumatKthlevel(node x,int k)
{
    if(x==NULL)
       {
           return -1;
       }
       int sum=0,level=0;
    queue<node>q;
    q.push(x);
    q.push(NULL);
    while(!q.empty())
    {
        node a=q.front();
        q.pop();
        if(a!=NULL)
        {
            if(level==k){
         sum=sum+a->data;
        }
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
            level++;
        }
    }
    return sum;
}
int countnoofnodes(node x)
{
    if(x==NULL)
    {
        return 0;
    }
    return 1+countnoofnodes(x->left)+countnoofnodes(x->right);
}
class A{
public:
    int ans=0;
int height(node x)
{
    if(x==NULL)
    {
        return 0;
    }
    ans=max(ans,1+height(x->left)+height(x->right));
    return 1+max(height(x->left),height(x->right));
}
int diameter(node x)
{
    if(x==NULL)
    {
        return 0;
    }
    int a=height(root);
    return ans;
}
};
int height1(node x)
{
    if(x==NULL)
    {
        return 0;
    }
    //ans=max(ans,1+height1(x->left)+height1(x->right));
    return 1+max(height1(x->left),height1(x->right));
}
int sumofnodes(node x)
{
 if(x==NULL)
 {
     return 0;
 }
 return x->data+sumofnodes(x->left)+sumofnodes(x->right);
}
void sumreplacement(node x)
{
    if(x==NULL)
    {
        return;
    }
    sumreplacement(x->left);
    sumreplacement(x->right);
    if(x->left!=NULL)
    {
        x->data+=x->left->data;
    }
    if(x->right!=NULL)
    {
        x->data+=x->right->data;
    }
}
bool isbalanced(node root)
{
    if(root==NULL)
    {
        return true;
    }
    if(isbalanced(root->left)==false)
    {
        return false;
    }
    if(isbalanced(root->right)==false)
       {
           return false;
       }
    int lh=height1(root->left);
    int rh=height1(root->right);
    if(abs(lh-rh)<=1)
    {
        return true;
    }
    else{
        return false;
    }
}
void rightview(node root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node>q;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        for(int i=0;i<n;i++)
        {
            node a=q.front();
            q.pop();
            if(i==n-1)
            {
                cout<<a->data<<endl;
            }
            if(a->left)
            {
                q.push(a->left);
            }
            if(a->right){
                q.push(a->right);
            }
        }
    }
}
void leftview(node root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node>q;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        for(int i=1;i<=n;i++)
        {
            node a=q.front();
            q.pop();
            if(i==1)
            {
                cout<<a->data;
            }
            if(a->left)
            {
               q.push(a->left);
            }
            if(a->right)
            {
                q.push(a->right);
            }
        }
    }
}
node LCA(node root,int key1,int key2)
{
  if(root==NULL)
  {
      return NULL;
  }
  if(root->data==key1 || root->data==key2)
  {
      return root;
  }
  node left=LCA(root->left,key1,key2);
  node right=LCA(root->right,key1,key2);
  if(left==NULL && right==NULL)
  {
      return NULL;
  }
  if(left!=NULL && right!=NULL)
  {
      return root;
  }
  if(left !=NULL)
  {
      return LCA(root->left,key1,key2);
  }
  return LCA(root->right,key1,key2);
}

int main()
{
    //node root;
    /*insertnode(10);
    insertnode(20);
    insertnode(30);
    insertnode(40);*/
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
    /*node root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);*/
    //ipreorder(root);
    //inorder(root);
    //mirrortree(root);
   //int x= sumatKthlevel(root,2);
    //ipreorder(root);
    /*int c=countnoofnodes(root);
    int b=sumofnodes(root);
    A r;
    cout<<r.diameter(root)<<endl;
    cout<<c<<":"<<b<<":"<<":"<<isbalanced(root)<<endl;
    leftview(root);*/
    int b=sumofnodes(root);
    cout<<b;
    return 0;
}
