class Solution {
  public:
    bool canWePlaceCows(vector<int> &arr, int dist, int k, int n){
        int countCows=1;
        int last=arr[0];
        for(int i=0; i<n; i++){
            if(arr[i]-last>=dist){
                last=arr[i];
                countCows++;
            }
            if(countCows>=k){
                return true;
            }
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int low=1;
        int high=stalls[n-1]-stalls[0];
        while(low<=high){
            int mid=low+(high-low)/2;
            if(!canWePlaceCows(stalls, mid, k, n)){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return high;
    }
};