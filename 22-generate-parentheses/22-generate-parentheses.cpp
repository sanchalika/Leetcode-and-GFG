class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        parenthesis("(",1,0,ans,n);
        return ans;
    }
    void parenthesis(string cur,int o,int c,vector<string>&ans,int n)
    {
        if(cur.length()==2*n)
        {
            ans.push_back(cur);
            return;
            
        }
        if(o<n)
            parenthesis(cur+"(",o+1,c,ans,n);
        if(c<o)
            parenthesis(cur+")",o,c+1,ans,n);
    }
};