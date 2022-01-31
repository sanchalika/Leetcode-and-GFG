class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> a;
    	if(root==NULL) return a;
    	queue<Node*>q;
    	q.push(root);
    	bool flag = false;
    	while(!q.empty()){
    	    int n = q.size();
    	    vector<int>temp;
    	   while(n--){
    	        Node* curr = q.front();
    	        temp.push_back(curr->data);
    	        q.pop();
    	        if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
    	    }
    	    
    	    if(flag){
    	        reverse(temp.begin(),temp.end());
    	       
    	    }
    	    for(int i=0;i<temp.size();i++){
    	        a.push_back(temp[i]);
    	        
    	    }
    	    flag = !flag;
    	}
    	return a;
    }
};
