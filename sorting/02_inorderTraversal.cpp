//// Inorder Traversal : output array
//// Tags:  [tree]
//// Level: [Medium]

#include <iostream>
#include <vector>
#include "../dataStructure/tree.cpp"
using namespace std;

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if( root != NULL ){
            inorderTraversal(root->left);
            inorder_.push_back(root->val);
            inorderTraversal(root->right);
        }
        return inorder_;
    }
private:
    vector<int> inorder_;
};

int main(){

    int a[3] = {3,9,20};
    //int a[7] = {3,9,20,3,4,15,7};
    int n = sizeof(a)/sizeof(a[0]);
    TreeNode* root = createBinaryTree(root, a, 0, n);
    Solution sol;
    vector<int> inorderTree = sol.inorderTraversal(root);
    for( int i=0; i<inorderTree.size(); i++){ cout<<inorderTree[i]<<" "; } cout<<endl;
}
