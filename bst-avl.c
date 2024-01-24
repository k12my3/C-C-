#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
} *root=NULL, *x, *y, *t2;

int max(int a, int b)
{
    return (a>b) ? a : b;
}

int height(struct node *n)
{
    if(n==NULL)
        return 0;
    return n->height;
}

struct node *newnode(int key)
{
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->data=key;
    n->left = n->right = NULL;
    n->height = 1;
    return n;
}

struct node *rightrotate(struct node *y)
{
    x = y->left;
    t2 = x->right;
    x->right = y;
    y->left = t2;
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    return x;
}

struct node *leftrotate(struct node *x)
{
    y = x->right;
    t2 = y->left;
    y->left = x;
    x->right = t2;
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;
    return y;
}

int bal(struct node *n)
{
    if(n==NULL);
        return 0;
    return (height(n->left) - height(n->right));
}

struct node *insert(struct node *n, int key)
{
    if(n==NULL)
        return(newnode(key));

    if(key < n->data)
        n->left = insert(n->left, key);
    else if(key > n->data)
        n->right = insert(n->right, key);
    else
        return n;
    
    n->height = 1 + max(height(n->left), height(n->right));
    int balance=bal(n);

    if(balance > 1 && key < n->left->data)
        return (rightrotate(n));
    if(balance < -1 && key > n->right->data)
        return (leftrotate(n));
    
    if(balance > 1 && key > n->left->data)
    {
        n->left = leftrotate(n->left);
        return rightrotate(n);
    }

    if(balance < -1 && key < n->left->data)
    {
        n->right = rightrotate(n->right);
        return leftrotate(n);
    }

    return n;
}

void display(struct node *root)
{
  if (root != NULL) 
	{
    		printf("%d ", root->data);
    		display(root->left);
    		display(root->right);
  	}
}

int main()
{
    int ch=1, ele;
    while(ch)
    {
        printf("\nInsert value: ");
        scanf("%d", &ele);
        root = insert(root, ele);
        printf("Insert more elements: - 1/0 ? ");
        scanf("%d", &ch); 
    }
    printf("\n\nEntered data - PreOrder:\n");
    display(root);
    return 0;
}