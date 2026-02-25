1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        int n = nums.size();
5        int low = 1;
6        int high = n - 2;
7        if (n == 1)
8            return nums[0];
9        if (nums[0] != nums[1])
10            return nums[0];
11        if (nums[n - 1] != nums[n - 2])
12            return nums[n - 1];
13        while (low <= high) {
14            int mid = low + (high - low) / 2;
15            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
16                return nums[mid];
17            } else if (((mid % 2) == 1 && nums[mid - 1] == nums[mid]) ||
18                       ((mid % 2 == 0) && nums[mid] == nums[mid + 1])) {
19                low = mid + 1;
20            } else {
21                high = mid - 1;
22            }
23        }
24        return -1;
25    }
26};