// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[51][51];
   
   bool isValid(int x,int y,int n,int m){
       if(x < 0 || x >= n || y < 0 || y >= m) return (false);
       return (true);
   }
   
   int helper(int x,int y,int n,int m,vector<vector<int>> &M){
       if(!isValid(x,y,n,m)) return (0);
       
       if(dp[x][y] != -1) return (dp[x][y]);
       
       int res1 = M[x][y] + helper(x-1,y+1,n,m,M);
       int res2 = M[x][y] + helper(x,y+1,n,m,M);
       int res3 = M[x][y] + helper(x+1,y+1,n,m,M);
       return dp[x][y] = (max(res1,max(res2,res3)));
   }
   
   int maxGold(int n, int m, vector<vector<int>> M)
   {
       int maxGold = 0;
       memset(dp,-1,sizeof(dp));
       
       for(int i = 0; i < n; i++){
           int gold = helper(i,0,n,m,M);
           maxGold = max(maxGold,gold);
       }
       
       return (maxGold);
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}  // } Driver Code Ends