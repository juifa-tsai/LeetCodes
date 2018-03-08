//// Inorder Traversal : output array
//// Tags:  [tree]
//// Level: [Medium]

#include <iostream>
#include <vector>
#include "../dataStructure/tree.cpp"
using namespace std;


// 01. my code : O(n), recursive
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


// 02. Stack : O(n)
vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    vector<TreeNode*> stack;
    TreeNode* cur = root;
    while( cur != NULL || !stack.empty() ){
        while( cur != NULL ){
            stack.push_back(cur);
            cur = cur->left;
        }
        result.push_back(stack.back()->val); // get node value
        cur = stack.back()->right;
        stack.pop_back();
    }
    return result;
}


int main(){

    //int a[3] = {3,9,20};
    int a[7] = {3,9,20,3,4,15,7};
    int n = sizeof(a)/sizeof(a[0]);
    TreeNode* root = createBinaryTree(root, a, 0, n);
    //Solution sol;
    //vector<int> inorderTree = sol.inorderTraversal(root);
    vector<int> inorderTree = inorderTraversal(root);
    for( int i=0; i<inorderTree.size(); i++){ cout<<inorderTree[i]<<" "; } cout<<endl;
}
