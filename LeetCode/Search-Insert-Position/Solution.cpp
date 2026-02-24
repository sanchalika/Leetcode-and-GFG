1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int n=nums.size();
5        int left=0;
6        int right = n-1;
7        while(left<=right){
8            int mid=left+(right-left)/2;
9            if(nums[mid]==target){
10                return mid;
11            }else if(nums[mid]>target){
12                right=mid-1;
13            }
14            else{
15                left=mid+1;
16            }
17        }
18        return left;
19    }
20};