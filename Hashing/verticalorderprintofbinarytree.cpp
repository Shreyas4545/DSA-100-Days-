#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node*left,*right;
};
Node*newnode(int x)
{
    Node*node=new Node;
    node->key=x;
    node->left=node->right=NULL;
    return node;
}
void shreyas(Node*root,int x,map<int,vector<int>>&m)
{
  if(root==NULL)
  {
    return;
  }
  m[x].push_back(root->key);
  shreyas(root->left,x-1,m);
  shreyas(root->right,x+1,m);
}

int main()
{
    Node*root=newnode(10);
    root->left=newnode(7);
    root->right=newnode(5);
    root->left->left=newnode(6);
    root->left->right=newnode(8);
    root->right->left=newnode(50);
    root->right->right=newnode(45);
    map<int,vector<int>>m;
    int hdis=0;
    shreyas(root,hdis,m);
    for(auto it:m)
    {
          for(int i=0;i<(it.second).size();i++)
          {
            cout<<(it.second)[i];
          }
          cout<<endl;
    }
    return 0;
}