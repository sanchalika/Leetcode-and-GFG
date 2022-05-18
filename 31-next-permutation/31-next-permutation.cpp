class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
//         int n=nums.size();
//         int l,r;
//         for(l=n-2;l>=0;l--)                           // find decreasing sequence
//         {
//             if(nums[l]<nums[l+1]) break;
//         }
//         if(l<0) reverse(nums.begin(),nums.end());
//         else
//         {
//             for(r=n-1;r>l;r--)                       // find rightmost successor to pivot
//             {
//                 if(nums[r]>nums[l]) break;
//             }
//             swap(nums[l],nums[r]);                  // swap l,r
            
//             reverse(nums.begin()+l+1,nums.end());   // reverse from l+1 to end
        int n=nums.size();
        int idx=-1;
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                idx=i;
                break;
            }        
        }
        if(idx==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            int prev=idx;
            for(int i=idx+1;i<n;i++){
                if(nums[i]>nums[idx-1] && nums[i]<=nums[prev]){
                    prev=i;
                }
            }
            swap(nums[idx-1],nums[prev]);
            reverse(nums.begin()+idx,nums.end());
        }
        
        }
};