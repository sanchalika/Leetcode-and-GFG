1class Solution {
2    public int minSubArrayLen(int target, int[] nums) {
3        int left = 0;
4        int sum = 0;
5        int minLen = Integer.MAX_VALUE;
6        for (int right = 0; right < nums.length; right++) {
7            sum += nums[right];
8            while (sum >= target) {
9                minLen = Math.min(minLen, right - left + 1);
10                sum -= nums[left];
11                left++;
12            }
13        }
14        return (minLen == Integer.MAX_VALUE) ? 0 : minLen;
15    }
16}