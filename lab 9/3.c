/*write a c program to create a binary search tree having 5the given elements
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// A utility function to do inorder traversal of BST
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \t", root->key);
        inorder(root->right);
    }
}

struct node *insert(struct node *node, int key)
{

    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    return node;
}

int main()
{
    struct node *root = NULL;
    root = insert(root, 40);
    insert(root, 20);
    insert(root, 55);
    insert(root, 12);
    insert(root, 67);
    insert(root, 4);
    inorder(root);

    return 0;
}
