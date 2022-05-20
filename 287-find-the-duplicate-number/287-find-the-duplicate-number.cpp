// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int cnt=0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]==nums[j])
//                     return nums[i];
//             }
//         }
//         return -1;
//     }
// };

class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            if(i.second>1)
                return i.first;
        }
        return -1;
    }
};
