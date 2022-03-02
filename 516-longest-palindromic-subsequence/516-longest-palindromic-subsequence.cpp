class Solution {
public:
    int lps(string A, string B, int n,int m){
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
    int longestPalindromeSubseq(string s) {
        string str=s;
        reverse(s.begin(),s.end());
        int ans=lps(s,str,s.length(),str.length());
        return ans;
    }
};