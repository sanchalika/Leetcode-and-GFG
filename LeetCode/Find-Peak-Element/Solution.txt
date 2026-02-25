1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int n = nums.size();
5        int low = 1;
6        int high = n - 2;
7        if (n == 1)
8            return 0;
9        if (nums[0] > nums[1])
10            return 0;
11        if (nums[n - 1] > nums[n - 2])
12            return (n - 1);
13        while (low <= high) {
14            int mid = low + (high - low) / 2;
15            if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]) {
16                return mid;
17            } else if (nums[mid] < nums[mid + 1]) {
18                low = mid + 1;
19            } else {
20                high = mid - 1;
21            }
22        }
23        return -1;
24    }
25};