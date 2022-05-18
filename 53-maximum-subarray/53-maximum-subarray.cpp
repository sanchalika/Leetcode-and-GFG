class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n=nums.size();
        int curr=0,prev=nums[0];
       for(int i=0;i<n;i++){
           curr+=nums[i];
           if(nums[i] > curr)
               curr=nums[i];
           if(curr > prev)
               prev= curr;
       }
        return prev;
    }
};


