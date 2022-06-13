class Solution {
public:
    int dp[31];
    int calculate(int n){
        if(n==0 || n==1)
            return dp[n]=n;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=calculate(n-1)+calculate(n-2);
    }
    int fib(int n) {
        memset(dp,-1,sizeof(dp));
        return calculate(n);
    }
};