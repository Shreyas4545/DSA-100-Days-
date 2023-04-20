#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node *bst;
// bst root = NULL;
bst getnode(int data)
{
    bst newnode;
    newnode = (bst)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Empty\n");
        exit(0);
    }
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}
bst insert(bst root, int data)
{
    bst curr, parent,temp;
    curr = root;
    if (root == NULL)
    {
      temp = getnode(data);
      return temp; // return temp cannot be done as it is void
    }

    if(root->data > data)
    {
        root->left = insert(root->left, data);
    }
    else if(root->data < data)
    {
        root->right = insert(root->right, data);
    }

    return root;
}

void inorder_trav(bst root)
{
    if (root == NULL)
        return;

    inorder_trav(root->left);
    printf("%d ->", root->data);
    inorder_trav(root->right);
}

void preorder_trav(bst root)
{
    if (root == NULL)
        return;

    printf("%d ->", root->data);
    preorder_trav(root->left);
    preorder_trav(root->right);
}

void postorder_trav(bst root)
{
    if (root == NULL)
        return;

    postorder_trav(root->left);
    postorder_trav(root->right);
    printf("%d ->", root->data);
}

int main()
{
    int s, data;
    bst root = NULL;
   do
    {
        printf("\nChoose option\n1) For inserting\n2) For inorder display\n");
        scanf("%d", &s);
        switch (s)

        {
        case 1:
            printf("Enter the data\n");
            scanf("%d", &data);
            root = insert(root, data);
            break;
        case 2:
            inorder_trav(root);
            break;
        case 3:
            preorder_trav(root);
            break;
        case 4:
            postorder_trav(root);
            break;
        default:
            printf("Choose the right option\n");
            break;
        }
    }while(s!=4);
    return 0;
}
