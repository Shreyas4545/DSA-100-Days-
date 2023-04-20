#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

typedef struct node *node;

node create(node root,int x)
{
    node ptr=(node)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Memory error!");
        exit(0);
    }
    ptr->data=x;
    ptr->left=NULL;
    ptr->right=NULL;

    return ptr;
}

node insert(node root,int x)
{
    if(root==NULL)
    {
        return create(root,x);
    }
    else if(x<root->data)
    {
        root->left=create(root->left,x);
    }
    else
    {
        root->right=create(root->right,x);
    }
}

node copyList(node head)
{
    if (head == NULL) {
        return NULL;
    }
    else {

        // Allocate the memory for new Node
        // in the heap and set its data
        node newNode= (node)malloc(sizeof(node));

        newNode->data = head->data;

        // Recursively set the next pointer of
        // the new Node by recurring for the
        // remaining nodes
        newNode->next = copyList(head->next);

        return newNode;
    }
}

void inorder(node root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
    printf("\n");
}

void preorder(node root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
    printf("\n");
}

void postorder(node root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
    printf("\n");
}

node search(node root,int x)
{
    if(root==NULL || root->data==x)
    {
        return root;
    }

    if(x<root->data)
    {
        search(root->left,x);
    }
    else
    {
        search(root->right,x);
    }
}

node deletenode(node root,int x)
{
    if(root==NULL)
    {
        printf("**Empty BST**\n");
        return root;
    }
    node cur,parent,p,succ;
    cur=root;
    parent=NULL;
    while(cur!=NULL && cur->data!=x)
    {
        parent=cur;
        if(x>=cur->data)
        {
            cur=cur->right;
        }
        else
        {
            cur=cur->left;
        }
    }
    if(cur==NULL)
    {
        printf("Data unavailable!\n");
        return root;
    }

    if(cur->left==NULL)
    {
        p=cur->right;
    }
    else if(cur->right==NULL)
    {
        p=cur->left;
    }
    else
    {
        succ=cur->right;
        while(succ->left!=NULL)
        {
            succ=succ->left;
        }
        succ->left=cur->left;
        p=cur->right;
    }

    if(parent==NULL)
    {
        free(cur);
        return p;
    }

    if(cur==parent->left)
    {
        parent->left=p;
    }
    else
    {
        parent->right=p;
    }
    free(cur);
    return root;
}

void outdegree(node root)
{
    int cnt=0;
    if(root!=NULL)
    {
        if(root->left!=NULL)
        {
            cnt++;
        }
        if(root->right!=NULL)
        {
            cnt++;
        }
    }
    printf("Out-Degree of Root = %d\n",cnt);
}

void edgesofbst(node root)
{
    int cnt=0;
    if(root!=NULL)
    {
        inorder(root->left);
        cnt++;
        inorder(root->right);
    }
    printf("Edges = %d\n",cnt-1);
}

node delless(node root)
{
    int x;
    printf("Delete lesser than key\n");
    printf("Enter key: ");
    scanf("%d",&x);
    node cur=search(root,x);
    if(!cur)
    {
        printf("Key not found\n");
        return cur;
    }
    free(cur->left);
    printf("Deleted elements lesser than key\n");
    return root;
}

void inordersuccessor(node root)
{
    int x;
    printf("Enter key for successor: ");
    node ptr=search(root,x);
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==x)
    {
        if(root->right!=NULL)
            return find_min(root->right);
    }

    printf("\n");
}

void count_greater(node root)
{
    int cnt=0,x;
    printf("Enter key: ");
    scanf("%d",&x);
    node cur=root;
    if(root==NULL)
    {
        cnt=0;
    }
    while(cur!=NULL)
    {
        if(x>root->data)
        {
            cur=cur->right;
            cnt++;
        }
    }

    printf("number of elements greater than %d = %d",x,cnt);
}

void find_min(node root)
{
    node cur=root;
    if(root!=NULL)
    {
        find_min(cur->left);
    }
    printf("Minimum = %d",cur->data);
}

void addr_root(node root)
{
    printf("Address of root = %d\n",&root);
}

int main()
{
    node root=NULL,temp=NULL;
    int choice,x,find;
    printf("1. Insert\n2. Inorder traversal\n3. Preorder traversal\n4. Postorder traverse\n5. Search\n6.\nDelete\n7. Menu\n8. Exit\n");
    while(1)
    {
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d",&x);
            root=insert(root,x);//number of edges in a
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            printf("Search key: ");
            scanf("%d",&find);
            temp=search(root,find);
            break;
        case 6:
            printf("Enter key to delete: ");
            scanf("%d",&x);
            root=deletenode(root,x);
            break;
        case 7:
            printf("1. Insert\n2. Inorder traversal\n3. Preorder traversal\n4. Postorder traverse\n5. Search\n6. Delete\n7. Menu\n8. Exit\n");
            break;
        case 8:
            break;
        }
    }
    printf("In-Degree of root = NULL\n\n");
    outdegree(root);
    edgesbst(root);
    root=delless(root);
    inordersuccessor(root);
    count_greater(root);
    addr_root(root);
    find_min(root);

    return 0;
}
