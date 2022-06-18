// { Driver Code Starts
//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

//User function template for C++

class Solution{
  public:		
	int lps(string s) {
	    // Your code goes here
	    int j=s.size()-1;
	    for(int i=s.size()-2;i>=0;){
	        if(s[i]!=s[j]){
	            if(j==s.size()-1)
	            i--;
	            j=s.size()-1;
	            continue;
	        }
	        j--;
	        i--;
	    }
	    return s.size()-j-1;
	}
};

// { Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends