// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
   {
       set<int>s;
       for(int i=0; i<N ;i++){
         s.insert(arr[i]);
       }
       int cur_cnt =0,ans=0,prev= *(s.begin())-1;
       for(auto it=s.begin();it!= s.end();it++){
           if(*it != prev+1){
               ans = max(ans,cur_cnt);
               cur_cnt=0;
           }
           prev = *it;
           cur_cnt++;
       }
       ans = max(ans,cur_cnt);
       return ans;
   }


};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends