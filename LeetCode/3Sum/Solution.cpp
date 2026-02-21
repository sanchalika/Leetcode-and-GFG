1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        int n = nums.size();
5        vector<vector<int>> ans;
6        sort(nums.begin(), nums.end());
7        for (int i = 0; i < n; i++) {
8            if (i > 0 && nums[i] == nums[i - 1])
9                continue;
10            int j = i + 1, k = n - 1;
11            while (j < k) {
12                int sum = nums[i] + nums[j] + nums[k];
13                if (sum < 0) {
14                    j++;
15                } else if (sum > 0) {
16                    k--;
17                } else {
18                    vector<int> temp = {nums[i], nums[j], nums[k]};
19                    ans.push_back(temp);
20                    j++;
21                    k--;
22                    while (j < k && nums[j] == nums[j - 1])
23                        j++;
24                    while (j < k && nums[k] == nums[k + 1])
25                        k--;
26                }
27            }
28        }
29        return ans;
30    }
31};