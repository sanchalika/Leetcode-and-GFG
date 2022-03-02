// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
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
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
        return (m+n-lcs(X,Y,m,n));
    }
};

// { Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}

  // } Driver Code Ends