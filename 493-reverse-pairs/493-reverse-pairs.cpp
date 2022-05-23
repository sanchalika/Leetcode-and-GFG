class Solution {
private:
    int mergeSort(vector<int> &nums, int low, int high)
    {
        if(low>=high)   return 0;
        
        int mid=(low+high)/2;
        
        int cnt=mergeSort(nums,low,mid);
        cnt+=mergeSort(nums,mid+1,high);
        cnt+=merge(nums,low,mid,high);
        return cnt;
    }
    
    int merge(vector<int> &nums, int low, int mid, int high)
    {
        int total=0;
        int left = low;
        int right = mid+1;
        for(int i=right;i<=high;i++){
            long long val = 2LL*nums[i];
            long long ind = upper_bound(nums.begin()+left,nums.begin()+right,val)-nums.begin();
            if(ind<right){
                total+=(right-ind);
            }
        }
        vector<int> temp;
        while(left<=mid && right<=high){
           
            if(nums[left]>nums[right]){
                temp.push_back(nums[right]);
                right++;
            }
            else{
                temp.push_back(nums[left]);
                left++;
            }
        }
        
        while(left<=mid)
            temp.push_back(nums[left++]);
        while(right<=high)
            temp.push_back(nums[right++]);
        
        for(int i=low;i<=high;i++)
            nums[i]=temp[i-low];
        
        return total;
    }
public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
    }
};