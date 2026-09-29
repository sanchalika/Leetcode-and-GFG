1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
10 * right(right) {}
11 * };
12 */
13class Solution {
14public:
15    bool areMirror(TreeNode* root1, TreeNode* root2) {
16        if (!root1 && !root2) {
17            return true;
18        }
19        if (!root1 || !root2)
20            return false;
21        return (root1->val == root2->val) &&
22               (areMirror(root1->left, root2->right)) &&
23               (areMirror(root1->right, root2->left));
24    }
25    bool isSymmetric(TreeNode* root) {
26        if(!root) return true;
27        return areMirror(root->left, root->right);
28    }
29};