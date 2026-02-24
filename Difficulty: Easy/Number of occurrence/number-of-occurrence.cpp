class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int n = arr.size();
        int left = 0;
        int right = n - 1;
        int ans = n;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] >= target) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
    int upperBound(vector<int>& arr, int target) {
        int n = arr.size();
        int left = 0;
        int right = n - 1;
        int ans = n;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] > target) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
    int countFreq(vector<int>& arr, int target) {
        int n=arr.size();
        if(arr.empty()) return 0;
        int lb = lowerBound(arr, target);
        if (lb == n || arr[lb] != target) {
            return 0;
        }
        int ub = upperBound(arr, target) - 1;
        return (ub-lb)+1;
    }
};
