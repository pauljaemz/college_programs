#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

typedef struct BST
{
  int data;
  struct BST *left;
  struct BST *right;
}node;

node *create();
void insert(node *, node *);
void inorder(node *);
void preorder(node *);
void postorder(node *);

void main()
{
  char ch;
  node *root=NULL, *temp;
  int n, i;
  clrscr();
  printf("\nBinary Traversal\n\n");
  printf("How many nodes >>>");
  scanf("%d", &n);
  for(i = 0; i < n; i++)
  {
    temp = create();
    if(root == NULL)
    {
      root = temp;
    }
    else
    {
      insert(root, temp);
    }
  }
  printf("\nInorder Tranversal :");
  inorder(root);
  printf("\nPreorder Tranversal :");
  preorder(root);
  printf("\nPostorder Tranversal :");
  postorder(root);
getch();
}

node *create()
{
  node *temp;
  printf("\nEnter the data: ");
  temp = (node *)malloc(sizeof(node));
  scanf("%d", &temp->data);
  temp->left = temp->right=NULL;
  return temp;
}

void insert(node *root, node*temp)
{
  if(temp->data < root->data)
  {
    if(root->left!=NULL)
    {
      insert(root->left, temp);
    }
    else
    {
      root->left = temp;
    }
  }
  if(temp->data > root->data)
  {
    if(root->right != NULL)
    {
      insert(root->right, temp);
    }
    else
    {
      root->right = temp;
    }
  }
}

void inorder(node *root)
{
  if(root != NULL)
  {
    inorder(root->left);
    printf("%d, ", root->data);
    inorder(root->right);
  }
}

void preorder(node *root)
{
  if(root != NULL)
  {
    printf("%d, ", root->data);
    preorder(root->left);
    preorder(root->right);
  }
}

void postorder(node *root)
{
  if(root != NULL)
  {
    postorder(root -> left);
    postorder(root ->right);
    printf("%d, ", root->data);
  }
}