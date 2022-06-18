// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    int wordBreak(string A, vector<string> &B) {
        //code here
        if(A.empty()){
            return 1;
        }
        int i=0;
        for(int j=0;j<B.size();j++){
            if(A[i]==B[j][0]){
                int n=B[j].size();
                if(A[i+n-1]==B[j][n-1]){
                    if(wordBreak(A.substr(i+n),B)){
                        return 1;
                    }
                }
            }
        }
        return 0;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends