1class Solution {
2    public int[] nextGreaterElements(int[] nums) {
3        int n = nums.length;
4        int[] ans = new int[n];
5        Stack<Integer> st = new Stack<>();
6        for (int i = 2 * n - 1; i >= 0; i--) {
7            while (!st.isEmpty() && st.peek() <= nums[i % n]) {
8                st.pop();
9            }
10            if (i < n) {
11                ans[i] = st.isEmpty() ? -1 : st.peek();
12            }
13            st.push(nums[i % n]);
14        }
15        return ans;
16    }
17}