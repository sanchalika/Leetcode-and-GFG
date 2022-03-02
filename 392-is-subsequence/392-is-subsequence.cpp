class Solution {
public:
     // int k=0;
      int lcs(string A, string B, int n,int m){
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(A[i-1]==B[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else 
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                
            }
        }
        return dp[n][m];
    }
    bool isSubsequence(string s, string t) {
      
        if(lcs(s,t,s.length(),t.length())==s.length())
            return true;
        else 
            return false;
        
    }
};






















  // for(int i=0;i<t.length();i++){
  //           if(t[i]==s[k])
  //               k++;
  //       }
  //       if(k==s.length()){
  //           return true;
  //       }
  //       return false;