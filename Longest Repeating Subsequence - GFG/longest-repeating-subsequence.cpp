// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	    int lcs(string str1, string str2){
	        int m=str1.length();
	        int n=str2.length();
	        int dp[1001][1001];
	        for(int i=0;i<m+1;i++){
	            for(int j=0;j<n+1;j++){
	                if(i==0 || j==0)
	                dp[i][j]=0;
	            }
	        }
	        for(int i=1;i<m+1;i++){
	            for(int j=1;j<n+1;j++){
	                if(str1[i-1]==str2[j-1] && i!=j)
	                dp[i][j]=1+dp[i-1][j-1];
	                else
	                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	            }
	        }
	        return dp[m][n];
	    }
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    
		    return lcs(str,str);
		    
		    
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends