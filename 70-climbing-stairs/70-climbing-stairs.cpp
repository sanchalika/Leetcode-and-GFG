class Solution {
public:
    int climbStairs(int n) {
        int dp[n+1];
        dp[0]=1;
        for(int i=1;i<=n;i++){
            int a=0;
            int b=0;
            if(i>=1){
                a=dp[i-1];
            }
            if(i>=2){
                b=dp[i-2];
            }
            dp[i]=a+b;
        }
        return dp[n];
    }
};