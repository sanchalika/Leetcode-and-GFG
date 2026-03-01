class Solution {
  public:
    int noOfGs(long double dist, vector<int>&arr){
        int cnt =0; 
        for(int i=1; i<arr.size(); i++){
            int numInBet=((arr[i]-arr[i-1])/dist);
            if(arr[i]-arr[i-1]/dist==numInBet*dist){
                numInBet--;
            }
            cnt+=numInBet;
        }
        return cnt;
    }
    double minMaxDist(vector<int> &arr, int k) {
        // Code here
        int n=arr.size();
        long double low = 0, high = 0;
        for(int i=0; i<n; i++){
            high=max(high, (long double)(arr[i+1]-arr[i]));
        }
        while(high-low>1e-6){
            long double mid=(low+high)/2.0;
            int cnt=noOfGs(mid, arr);
            if(cnt>k){
                low=mid;
            }else{
                high=mid;
            }
        }
        return high;
    }
};