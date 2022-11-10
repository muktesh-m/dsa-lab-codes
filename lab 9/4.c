/*wcp to do the following traversal in binary search tree:
1.In order traversal
2.Pre order traversal
3. Post order traversal
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *l;
    struct node *r;
};

struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->l = NULL;
    node->r = NULL;

    return (node);
}

/* Given a binary tree, print its nodes in inorder*/
void Inorder(struct node *node)
{
    if (node == NULL)
        return;

    Inorder(node->l);

    printf("%d ", node->data);

    Inorder(node->r);
}

/* Given a binary tree, print its nodes in preorder*/
void Preorder(struct node *node)
{
    if (node == NULL)
        return;

    printf("%d ", node->data);

    Preorder(node->l);

    Preorder(node->r);
}
// postorder
void Postorder(struct node *node)
{
    if (node == NULL)
        return;

    Postorder(node->l);

    Postorder(node->r);

    printf("%d ", node->data);
}

int main()
{
    struct node *root = newNode(1);
    root->l = newNode(2);
    root->r = newNode(3);
    root->l->l = newNode(4);
    root->l->r = newNode(5);

    // Function call
    printf("\nPreorder traversal of binary tree is \n");
    Preorder(root);
    printf("\nInorder traversal of binary tree is \n");
    Inorder(root);
    printf("\nPostorder traversal of binary tree is \n");
    Postorder(root);

    return 0;
}
