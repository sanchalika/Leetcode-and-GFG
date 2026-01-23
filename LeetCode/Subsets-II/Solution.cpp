1class Solution {
2public:
3    void findDups(int idx, vector<int>&ds, vector<int>& nums, vector<vector<int>>&ans){
4        ans.push_back(ds);
5        for(int i=idx; i<nums.size();i++){
6            if(i!=idx && nums[i]==nums[i-1]) continue;
7            ds.push_back(nums[i]);
8            findDups(i+1, ds, nums, ans);
9            ds.pop_back();
10        }
11    }
12    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
13        vector<vector<int>>ans;
14        vector<int>ds;
15        sort(nums.begin(), nums.end());
16        findDups(0, ds, nums, ans);
17        return ans;
18    }
19};