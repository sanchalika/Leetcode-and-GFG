1class Solution {
2public:
3    int findMini(vector<int>& nums, int n) {
4        int mini = INT_MAX;
5        for (int i = 0; i < n; i++) {
6            mini = min(mini, nums[i]);
7        }
8        return mini;
9    }
10    bool isSubarrayPossible(vector<int>& nums, int barrier, int k, int n){
11        int noOfSubarrays=1;
12        int allocateNums=0;
13        for(int i=0; i<n; i++){
14            if(nums[i]>barrier){
15                return false;
16            }
17            if(nums[i]+allocateNums>barrier){
18                noOfSubarrays+=1;
19                allocateNums=nums[i];
20            }else{
21                allocateNums+=nums[i];
22            }
23        }
24        if(noOfSubarrays>k){
25            return false;
26        }else{
27            return true;
28        }
29    }
30    int splitArray(vector<int>& nums, int k) {
31        int n = nums.size();
32        int low = findMini(nums, n);
33        int high = accumulate(nums.begin(), nums.end(), 0);
34        while (low <= high) {
35            int mid = low + (high - low) / 2;
36            if (isSubarrayPossible(nums, mid, k, n)) {
37                high = mid - 1;
38            } else {
39                low = mid + 1;
40            }
41        }
42        return low;
43    }
44};