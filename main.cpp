#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct node
{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}

struct node* insert(struct node* node, int key)
{
    if (node == NULL) return newNode(key);

    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}

struct node* search(struct node* root, int key)
{
    if (root == NULL || root->key == key)
       return root;

    if (root->key < key)
       return search(root->right, key);

    return search(root->left, key);
}



int main()
{
    struct node *root = NULL;
    int a,n;
    cin >> n;
    cin >> a;
    root = insert(root, a);
    for(int i = 1; i < n; i++) {
       cin >> a;
       insert(root, a);
    }
    inorder(root);
    return 0;
}
