class Solution {
    public int numSubarraysWithSum(int[] nums, int goal) {
        return atMostGoal(nums, goal)-atMostGoal(nums, goal-1);
    }
    public int atMostGoal(int []nums, int goal){
        int l=0, r=0, sum=0;
        int count=0;
        int n=nums.length;
        if(goal<0) return 0;
        while(r<n){
            sum+=nums[r];
            while(sum>goal){
                sum=sum-nums[l];
                l=l+1;
            }
            count+=r-l+1;
            r++;
        }
        return count;
    }
}