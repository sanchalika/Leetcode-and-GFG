1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int n=nums.size();
5        int maxProd=nums[0];
6        for(int i=0; i<n; i++){
7            int currProd=1;
8            for(int j=i; j<n; j++){
9                currProd*=nums[j];
10                maxProd=max(currProd, maxProd);
11            }
12        }
13        return maxProd;
14    }
15};