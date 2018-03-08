//// Postorder Traversal : output array
//// Tags:  [tree]
//// Level: [Medium]

#include <iostream>
#include <vector>
#include "../dataStructure/tree.cpp"
using namespace std;

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if( root != NULL ){
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            postorder_.push_back(root->val);
        }
        return postorder_;
    }
private:
    vector<int> postorder_;
};

int main(){

    int a[3] = {3,9,20};
    //int a[7] = {3,9,20,3,4,15,7};
    int n = sizeof(a)/sizeof(a[0]);
    TreeNode* root = createBinaryTree(root, a, 0, n);
    Solution sol;
    vector<int> postorderTree = sol.postorderTraversal(root);
    for( int i=0; i<postorderTree.size(); i++){ cout<<postorderTree[i]<<" "; } cout<<endl;
}
