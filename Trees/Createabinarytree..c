#include<stdio.h>
#include<stdlib.h>
struct node{
struct node*lchild;
struct node*rchild;
int data;
}*root=NULL;
void insert(int key)
{
    struct node*p,*t=root,*r=NULL;
  if(root==NULL)
  {
      p=(struct node*)malloc(sizeof(struct node));
      p->data=key;
      p->lchild=p->rchild=NULL;
      root=p;
      return;
  }
  while(t){
        r=t;
    if(key>t->data)
    {
        t=t->rchild;
    }
    else if(key<t->data)
    {
        t=t->lchild;
    }
  }
  p=(struct node*)malloc(sizeof(struct node));
  p->data=key;
  p->lchild=p->rchild=NULL;
  if(key<r->data)
  {
      r->lchild=p;
  }
  else if(key>r->data)
  {
      r->rchild=p;
  }
}
struct node*search(int key)
{
   struct node*p=root;
   while(p)
   {
       if(key==p->data)
    {
        return p;
    }
    else if(key>p->data)
    {
        p=p->rchild;
    }
    else if(key<p->data)
    {
        p=p->lchild;
    }
   }

}
int height(struct node*p)
{
  if(p==NULL)
  {
      return 0;
  }
  int x,y;

  x=height(p->lchild);
  y=height(p->rchild);
  if(x>y)
  {
      return x+1;
  }
  else{
    return y+1;
  }
}
struct node*inorders(struct node*p)
{
    while(p && p->lchild)
    {
        p=p->lchild;
    }
    return p;
}
struct node*inorderp(struct node*p)
{
 while(p && p->rchild)
 {
     p=p->rchild;
 }
 return p;
}
void preorder(struct node*p)
{
    if(p)
    {
        printf("%d ",p->data);
       preorder(p->lchild);
        preorder(p->rchild);
    }
}
struct node*deletenode(struct node*p,int key)
{
    struct node*temp;
 if(p->data==NULL)
 {
     return p;
 }
 else if(key<p->data)
 {
     p->lchild=deletenode(p->lchild,key);
 }
 else if(key>p->data)
 {
     p->rchild=deletenode(p->rchild,key);
 }
 else{
    if(p->rchild==NULL && p->lchild==NULL)
    {
       return NULL;
    }
    else if(p->lchild==NULL)
    {
        temp=p->rchild;
        free(p);
        return temp;
    }
    else if(p->rchild==NULL)
    {
        temp=p->lchild;
        free(p);
        return temp;
    }
    temp=inorders(p->rchild);
    p->data=temp->data;
    p->rchild=deletenode(p->rchild,temp->data);
}
return p;
}
int main()
{
    struct node*q,*y;
    insert(10);
    insert(5);
    insert(20);
    insert(3);
    insert(7);
    insert(15);
    insert(30);
    preorder(root);
    printf("\n");
    struct node*t=search(20);
    int a=height(root);
    q=inorders(root->rchild);
    y=inorderp(root->lchild);
    printf("%d %d %d",t->data,q->data,y->data);
    printf("\n%d\n",a);
    root=deletenode(root,20);
    preorder(root);
    return 0;
}
