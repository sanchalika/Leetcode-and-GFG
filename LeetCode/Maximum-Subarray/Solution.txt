1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int n = nums.size();
5        int maxSum = nums[0];
6        int currSum = 0;
7        for (int i = 0; i < n; i++) {
8            currSum += nums[i];
9            maxSum = max(currSum, maxSum);
10            if (currSum < 0) {
11                currSum = 0;
12            }
13        }
14        return maxSum;
15    }
16};
17