//// Preorder Traversal : output array
//// Tags:  [tree] [stack]
//// Level: [Medium]

#include <iostream>
#include <vector>
#include "../dataStructure/tree.cpp"
using namespace std;

// 01. my code : O(n), recursive
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


// 02. Stack : O(n)
vector<int> preorderTraversal(TreeNode* root) {
    vector<TreeNode*> stack;
    vector<int> result;
    TreeNode* cur = root;
    while( cur != NULL || !stack.empty() ){
        while( cur != NULL ){
            result.push_back(cur->val); // get node value
            stack.push_back(cur);
            cur = cur->left;
        }
        cur = stack.back()->right;
        stack.pop_back();
    }
    return result;
}

int main(){

    int a[3] = {3,9,20};
    //int a[7] = {3,9,20,3,4,15,7};
    int n = sizeof(a)/sizeof(a[0]);
    TreeNode* root = createBinaryTree(root, a, 0, n);
    //Solution sol;
    //vector<int> preorderTree = sol.preorderTraversal(root);
    vector<int> preorderTree = preorderTraversal(root);
    for( int i=0; i<preorderTree.size(); i++){ cout<<preorderTree[i]<<" "; } cout<<endl;
}
