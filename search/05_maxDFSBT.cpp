//// Max depth of binary tree
//// Tags:  [tree] [DFS] [BFS]
//// Level: [Easy]

#include <iostream>
#include <vector>
#include <map>
#include "../dataStructure/tree.cpp"
using namespace std;
/*
// BFS - O(n)
int maxDepth(TreeNode* root) {
    int l_depth=0, r_depth=0;
    if( root )
    { 
        r_depth++; l_depth++;
        if( root->left )  l_depth += maxDepth(root->left);
        if( root->right ) r_depth += maxDepth(root->right);   
    }
    return l_depth > r_depth ? l_depth : r_depth;
    //return max(l_depth, r_depth);
}
*/

// DFS - O(n)
int maxDepth(TreeNode* root) {
    return root == NULL ? 0 : max(maxDepth(root->left), maxDepth(root->right))+1;
}

int main(){

    int a[7] = {3,9,20,0,0,15,7};
    //int a[7] = {3,9,20,3,4,15,7};
    int n = sizeof(a)/sizeof(a[0]);
    TreeNode* root = createBinaryTree(root, a, 0, n);
    cout<<"inOrder: ";
    inOrder(root); cout<<endl;
    cout<<"preOrder: ";
    preOrder(root); cout<<endl;
    cout<<"postOrder: ";
    postOrder(root); cout<<endl;
    cout<<"Max depth: "<<maxDepth(root)<<endl;
}
