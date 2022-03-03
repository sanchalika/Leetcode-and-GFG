// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int sum(int arr[],int N){
        int s=0;
        for(int i=0;i<N;i++){
            s+=arr[i];
        }
        return s;
    }
    int equalPartition(int N, int arr[])
    {
        int S=sum(arr,N);
        if(S&1)return 0;
        
        vector<vector<bool>> dp(N+1,vector<bool>(S/2+1,false));
        dp[0][0]=true;
        
        for(int i=1;i<=N;i++){
            for(int j=0;j<=S/2;j++){
                if(j<arr[i-1])dp[i][j]=dp[i-1][j];
                else dp[i][j]=max(dp[i-1][j-arr[i-1]],dp[i-1][j]);
            }
        }
        return dp[N][S/2];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends