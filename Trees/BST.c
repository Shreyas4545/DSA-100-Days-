#include<stdio.h>
#include<stdlib.h>

typedef struct bst
{
    int data;
    struct bst *left, *right;
}*bst;

bst getnode(int data)
{
    bst temp;
    temp = (struct bst*)malloc(sizeof(struct bst));

    temp->left = NULL;
    temp->right = NULL;
    temp->data = data;


    return temp;

}

bst insert(bst root, int data)
{
    if (root == NULL)
    {
        root = getnode(data);
        return root;
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

void preorder(bst root)
{
    if(root == NULL)
    {
        return;
    }

    printf("%d\n", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(bst root)
{
    if(root == NULL)
    {
        return;
    }

    inorder(root->left);
    printf("%d\n", root->data);
    inorder(root->right);
}

void postorder(bst root)
{
    if(root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    printf("%d\n", root->data);
}

void search(bst root, int data)
{
   while(root!=NULL)
   {
       if(root->data == data)
       {
           return root;
       }
       else if(root->data > data)
       {
           return search(root->left, data);
       }
       else if(root->data < data)
       {
           return search(root->right, data);
       }
       else{
           printf("No data found\n");
       }
   }
}

void max(bst root, int data)
{
    if(root == NULL)
    {
      printf("There is no element in the tree\n");
    }

    while(root->right!=NULL)
    {
        root = root->right;
    }

    printf("Maximum element is %d\n", root->data);
}

void min(bst root, int data)
{
    if(root == NULL)
    {
      printf("There is no element in the tree\n");
    }

    while(root->left!=NULL)
    {
        root = root->left;
    }

    printf("Minimum element is %d\n", root->data);
}

void leafnode(bst root)
{

    if(root!=NULL)
    {
        leafnode(root->left);
        leafnode(root->right);

        if(root->left == NULL && root->right == NULL)
        {
            printf("%d\n", root->data);
        }
    }
}

void onechild(bst root)
{
    if(root!=NULL)
    {
        onechild(root->left);
        onechild(root->right);

        if((root->left == NULL && root ->right != NULL) || (root->left != NULL && root ->right == NULL))
        {
            printf("%d\n", root->data);
        }
    }
}

void twochild(bst root)
{
    if(root!=NULL)
    {
        twochild(root->left);
        twochild(root->right);

        if(root->left != NULL && root ->right != NULL)
        {
            printf("%d\n", root->data);
        }
    }
}

bst minValueNode(bst root)
{
    bst current = root;
    while (current && current->left != NULL)
        current = current->left;

    return current;
}

bst deleteNode(bst root, int data)
{
    if (root == NULL)
        return root;

    if (data < root->data)
        root->left = deleteNode(root->left, data);

    else if (data > root->data)
        root->right = deleteNode(root->right, data);

    else {
        if (root->left==NULL && root->right==NULL)
            return NULL;

        else if (root->left == NULL) {
            bst temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            bst temp = root->left;
            free(root);
            return temp;
        }

        bst temp = minValueNode(root->right);

        root->data = temp->data;

        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main()
{
    bst root = NULL;
    int ch, data;

    do
    {
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
        printf("11. Delete\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: printf("Enter the data\n");
                    scanf("%d", &data);

                    root = insert(root, data);
                    break;
            case 2: printf("Preorder Traversal\n");
                    preorder(root);
                    break;
            case 3: printf("Inorder Traversal\n");
                    inorder(root);
                    break;
            case 4: printf("Postorder Traversal\n");
                    postorder(root);
                    break;
            case 5: printf("Enter the value to be searched\n");
                    scanf("%d", &data);

                    search(root, data);
                    printf("%d", data);

            break;

            case 6: max(root, data);
                break;

            case 7: min(root, data);
            break;

            case 8: leafnode(root);
            break;

            case 9: onechild(root);
            break;

            case 10: twochild(root);
            break;

            case 11: printf("Enter tha data to be deleted\n");
                    scanf("%d", &data);

                    root = deleteNode(root, data);

                    break;

            case 12: exit(0);
            break;

            default: printf("Enter a  valid choice\n");
        }
    }while(ch!=12);
}
