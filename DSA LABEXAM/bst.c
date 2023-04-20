#include<stdio.h>
#include<stdlib.h>
typedef struct bst{
    int data;
    struct bst *left,*right;
}*bst;
int getnode(int data)
{
    bst temp;
    temp=(struct bst*)malloc(sizeof(struct bst));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
int insertion(bst root,int data)
{
    if(root==NULL)
    {
        root=getnode(data);
        return root;
    }
    if(root->data<data)
    {
        root->right=insertion(root->right,data);
    }
    if(root->data>data)
    {
        root->left=insertion(root->left,data);
    }
    return root;
}
void preorder(bst root)
{
    if(root==NULL)
    {
        return;
    }
     printf("%d ",root->data);
     preorder(root->left);
     preorder(root->right);

}
int main()
{
    bst root=NULL;
    int ch,data;
    do{
        printf("1.Insertion\n");
        printf("2.Preorder\n");
        printf("3.Postorder\n");
        printf("4.Inorder\n");
        printf("enter your choice\n");
        scanf("%d",&ch);

    switch(ch)
    {
        case 1:printf("enter the data\n");
               scanf("%d",&data);
               root=insertion(root,data);
               break;
        case 2:printf("The preorder traversal\n");
               preorder(root);
               break;
        case 3:exit(0);
               break;

    }

    }while(ch!=3);
    return 0;
}

