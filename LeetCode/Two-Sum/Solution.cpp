1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        vector<int> ans;
5        int n = nums.size();
6        for (int i = 0; i < n; i++) {
7            for (int j = i + 1; j < n; j++) {
8                if (nums[i] + nums[j] == target) {
9                    ans.push_back(i);
10                    ans.push_back(j);
11                }
12            }
13        }
14        return ans;
15    }
16};