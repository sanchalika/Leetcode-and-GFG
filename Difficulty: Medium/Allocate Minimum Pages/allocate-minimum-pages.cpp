class Solution {
  public:
    int findMax(vector<int>& bloomDay, int n) {
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, bloomDay[i]);
        }
        return maxi;
    }
    bool noOfPages(vector<int> &arr, int noOfPages, int k, int n){
        int noOfStudents=1;
        int allocation=arr[0];
        for(int i=1; i<n; i++){
            if(allocation+arr[i]>noOfPages){
                noOfStudents+=1;
                allocation=arr[i];
            }else{
                allocation+=arr[i];
            }
        }
        if(noOfStudents>k){
            return false;
        }
        return true;
    }
    int findPages(vector<int> &arr, int k) {
        int n=arr.size();
        int low=findMax(arr, n);
        int high=accumulate(arr.begin(), arr.end(), 0);
        if(n<k) return -1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(noOfPages(arr, mid, k, n)){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};