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
// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {
//         if(root==NULL) return NULL;
//         else if(root->val==val) return root;
//         else if(root->val > val) return searchBST(root->left, val);
//         else if(root->val < val) return searchBST(root->right, val);
//     }
//     // return false;
// };

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root)                      //leaf node
            return NULL;   
        if(root->val>val)       // search in left subtree
            return searchBST(root->left,val);
        else if(root->val<val)
            return searchBST(root->right,val);  // search in right subtree
        else
            return root;         // element founded 
    }
};