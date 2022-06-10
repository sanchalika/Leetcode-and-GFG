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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)return ans;
        queue<pair<TreeNode*,int>> q;
        map<int,vector<int>> m;
        q.push({root,0});
        m[0].push_back(root->val);
        while(!q.empty()){
            int n=q.size();
            map<int,vector<int>> mp;
            for(int i=0;i<n;i++){
                TreeNode* p=q.front().first;
                int x=q.front().second;
                q.pop();
                if(p->left){
                    q.push({p->left,x-1});
                    mp[x-1].push_back(p->left->val);
                }
                if(p->right){
                    q.push({p->right,x+1});
                    mp[x+1].push_back(p->right->val);
                }
            }
            for(auto it:mp){
            int dist=it.first;
            auto v=it.second;
            if(v.size()>1){
                sort(v.begin(),v.end());
            }
            for(auto e:v){
                m[dist].push_back(e);
            }
        }
        }
        for(auto it:m){
            auto v=it.second;
            ans.push_back(v);
        }
        return ans;
    }
};