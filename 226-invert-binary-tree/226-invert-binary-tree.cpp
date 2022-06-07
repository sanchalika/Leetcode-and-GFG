/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void swapp(TreeNode *curr){
        if(!curr) return;
        
        swapp(curr->left);
        swapp(curr->right);
        
        TreeNode *t=curr->left;
        curr->left=curr->right;
        curr->right=t;
    }
    TreeNode* invertTree(TreeNode* root) {
        swapp(root);
        return root;
    }
};