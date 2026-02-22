1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        int n = nums.size();
5        vector<vector<int>> ans;
6        sort(nums.begin(), nums.end());
7        for (int i = 0; i < n; i++) {
8            if (i > 0 && nums[i] == nums[i - 1])
9                continue;
10            for (int j = i + 1; j < n; j++) {
11                if (j > i + 1 && nums[j] == nums[j - 1])
12                    continue;
13                int k = j + 1, l = n - 1;
14                while (k < l) {
15                    long long sum = 1LL * nums[i] + nums[j] + nums[k] + nums[l];
16                    if (sum < target) {
17                        k++;
18                    } else if (sum > target) {
19                        l--;
20                    } else {
21                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
22                        ans.push_back(temp);
23                        k++;
24                        l--;
25                        while (k < l && nums[k] == nums[k - 1])
26                            k++;
27                        while (k < l && nums[l] == nums[l + 1])
28                            l--;
29                    }
30                }
31            }
32        }
33        return ans;
34    }
35};