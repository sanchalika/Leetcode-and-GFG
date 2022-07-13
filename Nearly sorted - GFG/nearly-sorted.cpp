// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int n, int k){
           
       vector<int>res;
       
       priority_queue<int,vector<int>,greater<int>>mh;
       
       for(int i=0;i<n;i++){
           mh.push(arr[i]);
           if(mh.size()>k){
               res.push_back(mh.top());
               mh.pop();
           }
       }
       
       for(int i=0;i<k;i++){
           res.push_back(mh.top());
           mh.pop();
       }
       return res;
   }
};

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}
  // } Driver Code Ends