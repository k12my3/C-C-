#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    char ch;
    int f;
    struct node *left;
    struct node *right;
};

struct node *create(int f, char ch)
{
    struct node *temp = (struct node*)calloc(1, sizeof(struct node));
    temp->ch = ch;
    temp->f = f;
    return temp;
}

void huffman(struct node *root, char *str)
{
    struct node *temp = root;
    for (int i=0; i<=strlen(str); i++)
    {
        if (temp->right == NULL && temp->left == NULL)
        {
            printf("%c", temp->ch);
            temp = root;
        }
        if (str[i] == '0')
            temp = temp->left;
        else if (str[i] == '1')
            temp = temp->right;
    }
}

int main()
{
    char str[100];
    printf("\nEnter 7-bit binary string to decode: ");
    scanf("%s", str);

    struct node *root = create(5, '\0');
    root->left = create(2, '\0');
    root->right = create(3, 'A');
    root->left->left = create(1, 'B');
    root->left->right = create(1, 'C');

    printf("\n\nDecoded string:\n");
    huffman(root, str);
    return 0;
}