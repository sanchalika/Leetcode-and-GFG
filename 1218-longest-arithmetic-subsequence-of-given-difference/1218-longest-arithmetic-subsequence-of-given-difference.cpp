class Solution {
public:
    int longestSubsequence(vector<int>& arr, int diff) {
        unordered_map<int, int> map;    // {value (arr[i]), index (i)}
        vector<int> dp (arr.size(), 1); // dynamic programming, defualt value is 1
        int res = 1;
        
        // for each number in arr
        for (int i = 0; i < arr.size(); i++) {
            int searchVal = arr[i] - diff;
            int currVal = arr[i];

            // check if we have encountered searchVal, if yes, update dp and res
            if (map.find(searchVal) != map.end()) {
                dp[i] = max(dp[i], dp[map[searchVal]] + 1);
                res = max(dp[i], res);
            }
            
            // update entry in map of arr[i] to the newest encounter
            map[currVal] = i;
        }
        
        return res;
    }
};