// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}// } Driver Code Ends

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
int minDeletions(string str, int n) { 
    //complete the function here 
        string str1=str;
        reverse(str.begin(),str.end());
        int ans=lps(str,str1,str.length(),str1.length());
        return abs(n-ans);
} 