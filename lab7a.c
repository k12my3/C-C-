//Simulate BST structure and perform traversal of  in-order, pre order and post order for the given values.

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

void preorder(node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void postorder(node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    int ch=1;
    node *root = NULL, *temp;

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

    printf("\nPreorder Traversal: ");
    preorder(root);
    printf("\nInorder Traversal:");
    inorder(root);
    printf("\nPostorder Traversal: ");
    postorder(root);
    return 0;
}
