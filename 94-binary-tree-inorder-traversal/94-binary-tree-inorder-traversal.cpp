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
   vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans; 
        if(!root)
            return ans;
        stack<TreeNode *> s;
        s.push(root);
        while(!s.empty()){
		//go till left most of current root but keep pushing nodes in between to process later
            while(root->left){
                s.push(root->left);
                root=root->left;
            }
            //print Node 
            TreeNode* toPrint=s.top();
            ans.push_back(toPrint->val);
            s.pop();
			// GO to immediate right child of freshly printed Node and make it root to process right subtree 
            if(toPrint->right)
            {
                s.push(toPrint->right);
                root=toPrint->right;
            }
        }
        return ans;
    }
};