class Solution {
public:
    int dp[38];
    int calc(int n){
        if(n==0 || n==1) return dp[n]=n;
        if(n==2) return dp[n]=1;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=calc(n-1)+calc(n-2)+calc(n-3);
    }
    int tribonacci(int n) {
       memset(dp,-1,sizeof(dp));
        int ans=calc(n);
        return ans;
    }
};