// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        // code here 
        int count=0;
        int swap=0;
        for(int i=0;i<S.size();i++){
            if(S[i]=='['){
                count--;
            }
            else if(S[i]==']'){
                count++;
                if(count>0){
                    swap+=count;
                }
            }
        }
        return swap;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends