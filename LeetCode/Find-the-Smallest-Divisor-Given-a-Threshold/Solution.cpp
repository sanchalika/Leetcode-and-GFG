1class Solution {
2public:
3    int findMax(vector<int>& bloomDay, int n) {
4        int maxi = INT_MIN;
5        for (int i = 0; i < n; i++) {
6            maxi = max(maxi, bloomDay[i]);
7        }
8        return maxi;
9    }
10    int findMini(vector<int>& bloomDay, int n) {
11        int mini = INT_MAX;
12        for (int i = 0; i < n; i++) {
13            mini = min(mini, bloomDay[i]);
14        }
15        return mini;
16    }
17    bool isDivisor(vector<int>& nums, int divisor, int threshold) {
18        int n = nums.size();
19        int ans = 0;
20        for (int i = 0; i < n; i++) {
21            ans += ceil((double)nums[i] / divisor);;
22            if (ans > threshold) {
23                return false;
24            } 
25        }
26        return true;
27    }
28    int smallestDivisor(vector<int>& nums, int threshold) {
29        int n = nums.size();
30        int low = 1;
31        int high = findMax(nums, n);
32        while (low <= high) {
33            int mid = low + (high - low) / 2;
34            if (isDivisor(nums, mid, threshold)) {
35                high = mid - 1;
36            } else {
37                low = mid + 1;
38            }
39        }
40        return low;
41    }
42};