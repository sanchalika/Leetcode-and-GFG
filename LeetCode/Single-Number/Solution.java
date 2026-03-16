1class Solution {
2    public int singleNumber(int[] nums) {
3        int ans = 0;
4        for (int i = 0; i < nums.length; i++) {
5            ans = ans ^ nums[i];
6        }
7        return ans;
8    }
9}