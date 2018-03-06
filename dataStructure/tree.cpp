// Tree data structure
#ifndef TREE_H
#define TREE_H

#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *createBinaryTree(TreeNode* root, int val[], int i, int i_end){
    if( i < i_end ){
        root = new TreeNode(val[i]);
        root->left  = createBinaryTree( root->left, val, 2*i+1, i_end );
        root->right = createBinaryTree( root->right, val, 2*i+2, i_end );
    }
    return root;
}

void inOrder(TreeNode* root) // BAC
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->val <<" ";
        inOrder(root->right);
    }
}

void preOrder(TreeNode* root) // ABC
{
    if (root != NULL)
    {
        cout << root->val <<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(TreeNode* root) // BCA
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->val <<" ";
    }
}

#endif