//// Postorder Traversal : output array
//// Tags:  [tree]
//// Level: [Medium]

#include <iostream>
#include <vector>
#include "../dataStructure/tree.cpp"
using namespace std;

// 01. my code: O(n), recursive
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

// 02. Stack : O(n)
vector<int> postorderTraversal(TreeNode* root) {
    vector<TreeNode*> stack;
    vector<int> result;
    TreeNode* cur = root;
    TreeNode* lastNode = NULL; //
    while( cur  || !stack.empty() ){
        if( cur  ){
            stack.push_back(cur);
            cur = cur->left;
        }
        else
        {
            TreeNode* topNode = stack.back();
            if( topNode->right && topNode->right != lastNode ){
                cur = topNode->right;
            }else{
                result.push_back(topNode->val);
                lastNode = topNode;
                stack.pop_back();
            }
        }
    }
    return result;
}

int main(){

    //int a[3] = {3,9,20};
    int a[7] = {3,9,20,3,4,15,7};
    int n = sizeof(a)/sizeof(a[0]);
    TreeNode* root = createBinaryTree(root, a, 0, n);
    //Solution sol;
    //vector<int> postorderTree = sol.postorderTraversal(root);
    vector<int> postorderTree = postorderTraversal(root);
    for( int i=0; i<postorderTree.size(); i++){ cout<<postorderTree[i]<<" "; } cout<<endl;
}
