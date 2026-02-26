1class Solution {
2public:
3    int findMax(vector<int>& bloomDay, int n) {
4        int maxi = INT_MIN;
5        for (int i = 0; i < n; i++) {
6            maxi = max(maxi, bloomDay[i]);
7        }
8        return maxi;
9    }
10    bool isDivisor(vector<int>& nums, int divisor, int threshold) {
11        int n = nums.size();
12        int ans = 0;
13        for (int i = 0; i < n; i++) {
14            ans += ceil((double)nums[i] / divisor);
15            ;
16            if (ans > threshold) {
17                return false;
18            }
19        }
20        return true;
21    }
22    int smallestDivisor(vector<int>& nums, int threshold) {
23        int n = nums.size();
24        int low = 1;
25        int high = findMax(nums, n);
26        while (low <= high) {
27            int mid = low + (high - low) / 2;
28            if (isDivisor(nums, mid, threshold)) {
29                high = mid - 1;
30            } else {
31                low = mid + 1;
32            }
33        }
34        return low;
35    }
36};