// Wap a c program search an element in binary tree
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
static bool flag = false;
struct node *createNode(int data)
{

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
void searchNode(struct node *temp, int value)
{
    if (root == NULL)
    {
        printf("Tree is empty\n");
    }
    else
    {

        if (temp->data == value)
        {
            flag = true;
            return;
        }
        if (flag == false && temp->left != NULL)
        {
            searchNode(temp->left, value);
        }
        // Search in right subtree
        if (flag == false && temp->right != NULL)
        {
            searchNode(temp->right, value);
        }
    }
}

int main()
{

    root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->right->left = createNode(5);
    root->right->right = createNode(6);

    searchNode(root, 5);

    if (flag)
        printf("Element is present in the binary tree");
    else
        printf("Element is not present in the binary tree");
    return 0;
}
