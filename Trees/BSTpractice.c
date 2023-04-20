#include<stdio.h>
#include<stdlib.h>
typedef struct bst{
    struct bst *left;
    int data;
    struct bst*right;
}*bst;
bst getnode(int data)
{
    bst temp;
    temp=(struct bst*)malloc(sizeof(struct bst));
    temp->data=data;
    temp->right=NULL;
    temp->left=NULL;
}
bst insert(bst root,int data)
{
    if(root==NULL)
    {
       root=getnode(data);
       return root;
    }
    if(root->data>data)
    {
        root->left=insert(root->left,data);

    }
    else if(root->data<data)
    {
        root->right=insert(root->right,data);
    }
    return root;
}

int preorder(bst root)
{
if(root==NULL)
{
    return;
}
printf("%d",root->data);
preorder(root->left);
preorder(root->right);
}

int postorder(bst root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}

void search(bst root,int data)
{
    while(root!=NULL)
    {
        if(root->data=data)
        {
            return root;
        }
        else if(root->data<data)
        {
            return search(root->right,data);
        }
        else if(root->data>data)
        {
            return search(root->left,data);
        }
        else{
            printf("Data not found");
        }
    }
}

void max(bst root,int data)
{
    if(root==NULL)
    {
        printf("No data");
    }
    while(root->right!=NULL)
    {
        root=root->right;
    }
    printf("%d\n",root->data);
}
void min(bst root,int data)
{
    if(root==NULL)
    {
        printf("No data");
    }
    while(root->left!=NULL)
    {
        root=root->left;
    }
    printf("%d",root->data);
}
int main()
{
    bst root=NULL;
    int ch,data;
    do{
        printf("1. Insert\n");
        printf("2. Preorder traversal\n");
        printf("3. Inorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Search\n");
        printf("6. Maximum Element\n");
        printf("7. Minimum element\n");
        printf("8. Leaf Node\n");
        printf("9. One child\n");
        printf("10. Two Child\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter the data\n");
                   scanf("%d",&data);
                   root=insert(root,data);
                   break;
            case 2:printf("preorder traversal\n");

        }

    }while(ch!=)
}
