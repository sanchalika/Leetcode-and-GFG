1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n=nums.size();
5        k=k%n;
6        reverse(nums.begin(), nums.end());
7        reverse(nums.begin(), nums.begin()+k);
8        reverse(nums.begin()+k, nums.end());
9    }
10};