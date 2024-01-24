#include <stdio.h>
#include <stdlib.h>

struct node
{
   int data;
   struct node *left;
   struct node *right;
} *root=NULL, *temp;

struct node *create()
{
   printf("\nEnter value to insert: ");
   scanf("%d", &temp->data);
   temp->left = temp->right = NULL;
   return temp;
}

void insert(struct node *root, struct node *temp)
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

void display(struct node *root) // In-order
{
   if(root != NULL)
   {
      display(root->left);
      printf("%d ",root->data);
      display(root->right);
   }
}

int main()
{
   int opt, value;
   while(1)
   {
      printf("\n\nChoose:\n1.Insert    2.Display  3.Exit    4.Display\n");
      scanf("%d",&opt);
      switch(opt)
      {
         case 1:
         {
            temp=create();
            if(root==NULL)
               root=temp;
            else
               insert(root, temp);
         } break;

         case 2: printf("\nIn-order elements:\n"); display(root); break;
         case 3: exit(0);
         default: printf("\nInvalid Opiton");
      }
   }
   return 0;
}

/*
void pre_order_traversal(struct node* root) 
{
   if(root != NULL) 
   {
      printf("%d ",root->data);
      pre_order_traversal(root->leftChild);
      pre_order_traversal(root->rightChild);
   }
}

void inorder_traversal(struct node* root) 
{
   if(root != NULL) 
   {
      inorder_traversal(root->leftChild);
      printf("%d ",root->data);          
      inorder_traversal(root->rightChild);
   }
}

void post_order_traversal(struct node* root) 
{
   if(root != NULL) 
   {
      post_order_traversal(root->leftChild);
      post_order_traversal(root->rightChild);
      printf("%d ", root->data);
   }
}
*/