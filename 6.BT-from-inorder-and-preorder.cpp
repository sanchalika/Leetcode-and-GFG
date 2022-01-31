class Solution{
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        // int preIndex=0, start=0;
        int i=0;
        if(n==0) return NULL;
        Node* root=new Node(pre[0]);
        for(i=0;i<n;i++){
            if(in[i]==pre[0])
            break;
        }
        root->left=buildTree(in,pre+1,i);
        root->right=buildTree(in+i+1,pre+i+1,n-i-1);
    }
};
