1class Solution {
2public:
3    void findCombinations(int idx, int target, vector<int>& candidates, vector<vector<int>>&ans, vector<int>&ds){
4        int n=candidates.size();
5        if(idx==n){
6            if(target==0){
7                ans.push_back(ds);
8            }
9            return;
10        }
11        if(candidates[idx]<=target){
12            ds.push_back(candidates[idx]);
13            findCombinations(idx, target-candidates[idx], candidates, ans, ds);
14            ds.pop_back();
15        }
16        findCombinations(idx+1, target, candidates, ans, ds);
17
18    }
19    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
20        vector<vector<int>>ans;
21        vector<int>ds;
22        findCombinations(0, target, candidates, ans, ds);
23        return ans;
24    }
25};