1class Solution {
2public:
3    void nextPermutation(vector<int>& nums) {
4        int idx = -1;
5        int n = nums.size();
6        for (int i = n - 2; i >= 0; i--) {
7            if (nums[i] < nums[i + 1]) {
8                idx = i;
9                break;
10            }
11        }
12        if (idx == -1) {
13            reverse(nums.begin(), nums.end());
14            return;
15        }
16        for (int i = n - 1; i >= idx; i--) {
17            if (nums[i] > nums[idx]) {
18                swap(nums[i], nums[idx]);
19                break;
20            }
21        }
22        reverse(nums.begin() + idx + 1, nums.end());
23    }
24};