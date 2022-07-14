// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        if(n==1) return 0;
        if(n==2) return arr[0]+arr[1];
        priority_queue<long long, vector<long long>, greater<long long>> pq (arr, arr+n);
        
        long long ans=0;
        
        while(pq.size()>1){
            long long first=pq.top();
            pq.pop();
            
            long long second=pq.top();
            pq.pop();
            
            ans=ans+first+second;
            pq.push(first+second);
            
        }
        return ans;
    }
};


// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends