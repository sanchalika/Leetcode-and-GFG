class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int ans=-1;
        int left=0;
        int right =n-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]<=x){
                ans=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return ans;
    }
};
