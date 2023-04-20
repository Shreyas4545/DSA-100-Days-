#include<stdio.h>
#include<stdlib.h>
struct node{
struct node*lchild;
struct node*rchild;
int height;
int data;
}*root=NULL;
int Nheight(struct node*p)
{
     int hl,hr;
 hl=p && p->lchild?p->lchild->height:0;
 hr=p && p->rchild?p->rchild->height:0;

 return hl>hr?hl+1:hr+1;
}
int balancefactor(struct node*p)
{
   int hl,hr;
 hl=p && p->lchild?p->lchild->height:0;
 hr=p && p->rchild?p->rchild->height:0;

 return hl-hr;
}
struct node*llrotation(struct node*p)
{
  struct node*pl=p->lchild;
  struct node*plr=pl->rchild;
  pl->rchild=p;
  p->lchild=plr;
  p->height=Nheight(p);
  pl->height=Nheight(pl);
  if(root==p)
  {
      root=pl;
  }
  return pl;
}
struct node*LRRotation(struct node*p)
{
 struct node*pl,*plr;
 pl=p->lchild;
 plr=pl->rchild;
 pl->rchild=plr->lchild;
 p->lchild=plr->rchild;
 plr->rchild=p;
 plr->lchild=pl;
 p->height=Nheight(p);
 pl->height=Nheight(pl);
 plr->height=Nheight(plr);
 if(root==p)
 {
    root=plr;
 }
 return plr;
}
struct node*RRRotation(struct node*p)
{
    struct node*pl=p->rchild,*plr=pl->lchild;
    p->rchild=plr;
    pl->lchild=p;
    p->height=Nheight(p);
    pl->height=Nheight(p);
    if(root==p)
    {
        root=pl;
    }
    return pl;
}
struct node*RLRotation(struct node*p)
{
 struct node*pl=p->rchild,*plr=pl->lchild;
 p->rchild=plr->lchild;
 pl->lchild=plr->rchild;
 plr->rchild=pl;
 plr->lchild=p;
 p->height=Nheight(p);
 pl->height=Nheight(pl);
 plr->height=Nheight(plr);
 if(root==p)
 {
     root=plr;
 }
 return plr;
}
struct node*Rinsert(struct node*p,int key)
{

    struct node*t=NULL;
    if(p==NULL)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=key;
        t->lchild=t->rchild=NULL;
        t->height=1;
        return t;
    }
    if(key<p->data)
    {
        p->lchild=Rinsert(p->lchild,key);
    }
    else if(key>p->data)
    {
        p->rchild=Rinsert(p->rchild,key);
    }

    p->height=Nheight(p);

    if(balancefactor(p)==2 && balancefactor(p->lchild)==1)
    {
        return llrotation(p);
    }
    else if(balancefactor(p)==2 && balancefactor(p->lchild)==-1)
    {
        return LRRotation(p);
    }
    else if(balancefactor(p)==-2 && balancefactor(p->rchild)==-1)
    {
        return RRRotation(p);
    }
    else if(balancefactor(p)==-2 && balancefactor(p->rchild)==1)
    {
        return RLRotation(p);
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
int main()
{
    root=Rinsert(root,10);
    Rinsert(root,20);
    Rinsert(root,30);
    preorder(root);
}
