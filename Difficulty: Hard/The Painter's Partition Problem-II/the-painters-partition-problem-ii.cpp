class Solution {
  public:
    int findMax(vector<int>& arr, int n) {
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, arr[i]);
        }
        return maxi;
    }
    bool isPossibleTime(vector<int>& arr, int barrier, int k, int n){
        int noOfPainters=1;
        int allocation=0; 
        for(int i=0; i<n; i++){
            if(arr[i]>barrier){
                return false;
            }
            if(allocation+arr[i]>barrier){
                noOfPainters+=1;
                allocation=arr[i];
            }else{
                allocation+=arr[i];
            }
        }
        if(noOfPainters > k){
            return false;
        }
        return true;
    }
    int minTime(vector<int>& arr, int k) {
        int n=arr.size();
        int low=findMax(arr, n);
        int high=accumulate(arr.begin(), arr.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isPossibleTime(arr, mid, k, n)){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};