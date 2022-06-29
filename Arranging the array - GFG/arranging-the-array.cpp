// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Rearrange(int arr[], int n);

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
        long long j=0;
      
        Rearrange( arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} // } Driver Code Ends




void Rearrange(int arr[], int n)
{
    // Your code goes here
    vector<int>v,v1;
    for(int i=0;i<n;i++){
        if(arr[i]<0)
        v.push_back(arr[i]);
        else
        v1.push_back(arr[i]);
    }
    for(int i=0;i<v1.size();i++){
        v.push_back(v1[i]);
    }
    for(int i=0;i<n;i++){
        arr[i]=v[i];
    }
    
}