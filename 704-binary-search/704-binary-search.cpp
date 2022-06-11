class Solution {
public:
    // int bsearch(vector<int>& nums, int target,int low,int high){
    //     int mid=(low+high)/2;
    //     if(low>high) return -1;
    //     if(nums[mid]==target) return mid;
    //     else if(nums[mid]>target)
    //         return bsearch(nums,target, low,mid-1);
    //     else
    //         return bsearch(nums, target, mid+1,high);
    // }
    int search(vector<int>& nums, int target) {
int n = nums.size()-1;
int low = 0, high = n;
while( low <= high){
int mid = low + (high-low)/2;
if (nums[mid] == target) return mid;
else if (nums[mid] > target) high = mid -1;
else low = mid + 1;
}
return -1;
    }
};