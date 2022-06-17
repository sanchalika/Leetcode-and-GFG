// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
// bool subArrayExists(int arr[], int N)
//     {
// //Your code here
//     unordered_set<int> us;
//     int sum = 0;
//     for(int i = 0; i < N; i++){
//         sum += arr[i];
//         if(us.find(sum) != us.end() || arr[i] == 0 || sum == 0) return true;
//         us.insert(sum);
//     }
//     return false;
//     }
bool subArrayExists(int arr[], int n)
{
    unordered_set<int> set;
    set.insert(0);
    int curr = 0;
    for (int i = 0; i < n; i++){
        curr += arr[i];
        if (set.count(curr)) return true;
        set.insert(curr);
    }
    return false;
}
};

// { Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}  // } Driver Code Ends