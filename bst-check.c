#include <stdio.h>
#include <stdlib.h>

typedef struct BST
{
    int data;
    struct BST *left;
    struct BST *right;
} node;

node *create()
{
    node *temp;
    printf("\nEnter value to insert: ");
    temp = (node *)malloc(sizeof(node));
    scanf("%d", &temp->data);
    temp->left = temp->right = NULL;
    return temp;
}

void insert(node *root, node *temp)
{
    if (temp->data < root->data)
    {
        if (root->left != NULL)
            insert(root->left, temp);
        else
            root->left = temp;
    }

    if (temp->data > root->data)
    {
        if (root->right != NULL)
            insert(root->right, temp);
        else
            root->right = temp;
    }
}

void display(node *root)
{
    if (root != NULL)
    {
        display(root->left);
        printf("%d ", root->data);
        display(root->right);
    }
}

int checkBST(node* root, node *temp)
{
    temp=root;
    if(root==NULL)
        return 1;

    else if(temp->left!=NULL && temp->right!=NULL)
    {
        if(temp->data > (temp->left)->data && temp->data< (temp->right)->data)
        {
            int ans1=checkBST(temp->left, temp);
            int ans2=checkBST(temp->right, temp);
            if(ans1 && ans2)
                return 1;
            else
                return 0;
        }
    }
    
    else if(temp->left==NULL && temp->right!=NULL)
    {
        if(temp->data < (temp->right->data))
            return checkBST(temp->right, temp);
        else
            return 0;
    }

    else if(temp->left!=NULL && temp->right==NULL)
    {
        if(temp->data > (temp->left->data))
               return checkBST(temp->left, temp);
        else
            return 0;
    }
    
    return 1;
}

int main()
{
    int ch=1;
    node *root = NULL, *temp;
    printf("\n\tInorder traversal of BST will produce sorted array in ascending order\n\tElse it is not a BST.\n");

    while(ch)
    {
        temp = create();
        if (root == NULL)
            root = temp;
        else
            insert(root, temp);

        printf("\nMore values? - 1/0 ?");
        scanf("%d", &ch);
    } 

    printf("\n\nGiven input - InOrder:\n");
    display(root);
    (checkBST(root, temp)==1) ? printf("\n\nGiven input is Binary Tree.") : printf("\n\nInput not a binary tree.");

    return 0;
}