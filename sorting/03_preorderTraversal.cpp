//// Preorder Traversal : output array
//// Tags:  [tree]
//// Level: [Medium]

#include <iostream>
#include <vector>
#include "../dataStructure/tree.cpp"
using namespace std;

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if( root != NULL ){
            preorder_.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
        return preorder_;
    }
private:
    vector<int> preorder_;
};

int main(){

    int a[3] = {3,9,20};
    //int a[7] = {3,9,20,3,4,15,7};
    int n = sizeof(a)/sizeof(a[0]);
    TreeNode* root = createBinaryTree(root, a, 0, n);
    Solution sol;
    vector<int> preorderTree = sol.preorderTraversal(root);
    for( int i=0; i<preorderTree.size(); i++){ cout<<preorderTree[i]<<" "; } cout<<endl;
}
