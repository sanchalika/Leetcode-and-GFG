1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        int n = nums.size();
5        set<vector<int>> res;
6        sort(nums.begin(), nums.end());
7        for (int i = 0; i < n; i++) {
8            for (int j = i + 1; j < n; j++) {
9                set<long long> st;
10                for (int k = j + 1; k < n; k++) {
11                    long long sum = (long long)nums[i] + nums[j] + nums[k];
12                    long long fourth = (long long)target - sum;
13                    if (st.find(fourth) != st.end()) {
14                        vector<int> temp = {nums[i], nums[j], nums[k], (int)fourth};
15                        sort(temp.begin(), temp.end());
16                        res.insert(temp);
17                    }
18                    st.insert(nums[k]);
19                }
20            }
21        }
22        vector<vector<int>> ans(res.begin(), res.end());
23        return ans;
24    }
25};