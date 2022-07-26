class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
        int x=cuts.size();
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        sort(cuts.begin(),cuts.end());
        vector<vector<int>> dp(x+2,vector<int> (x+2,0));
        for(int i=x;i>0;--i)
        {
            for(int j=i;j<=x;++j)
            {
                int mini=1e9;
                int len=cuts[j+1]-cuts[i-1];
                for(int ind=i;ind<=j;++ind)
                {
                    int cost=len+dp[i][ind-1]+dp[ind+1][j];
                    mini=min(mini,cost);
                }
                dp[i][j]=mini;
            }
        }
        return dp[1][x];
    }
};