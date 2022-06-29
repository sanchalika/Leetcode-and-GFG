// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here 
        vector<long long int>ans(n);
        vector<long long int>left_prod(n);
        vector<long long int>right_prod(n);
        left_prod[0]=1;
        for(int i=1;i<n;i++){
            left_prod[i]=left_prod[i-1]*nums[i-1];
        }
        right_prod[n-1]=1;
        for(int j=n-2;j>=0;j--){
            right_prod[j]=right_prod[j+1]*nums[j+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=left_prod[i]*right_prod[i];
        }
        return ans;
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends