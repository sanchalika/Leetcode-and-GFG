vector<int> diagonal(Node *root)
{
   // your code here
   vector<int>ans;
   queue<Node*>q;
   q.push(root);
   while(!q.empty()){
        // int n=q.size();
        Node *curr=q.front();
        q.pop();
        while(curr!=NULL){
            
            if(curr->left!=NULL) 
            q.push(curr->left);
            ans.push_back(curr->data);
            curr=curr->right;
        }
   
   }
   return ans;
}
