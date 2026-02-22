1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int,int>mpp;
5        for(int i=0; i<nums.size(); i++){
6            int num = target - nums[i];
7            if(mpp.find(num)!=mpp.end()){
8                return {mpp[num], i};
9            }
10            mpp[nums[i]]=i;
11        }
12        return {};
13    }
14};