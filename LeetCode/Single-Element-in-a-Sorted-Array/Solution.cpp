1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        int n = nums.size();
5        int left = 0;
6        int right = n - 1;
7        while (left < right) {
8            int mid = left + (right - left) / 2;
9            if (mid % 2 == 1)
10                mid = mid - 1;
11            if ((mid + 1) < n && nums[mid] == nums[mid + 1]) {
12                left = mid + 2;
13            } else {
14                right = mid;
15            }
16        }
17        return nums[left];
18    }
19};