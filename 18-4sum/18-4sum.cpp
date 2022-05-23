class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int t) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int st=j+1, end=n-1, sum=t-nums[i]-nums[j];
                while(st<end){
                    if(nums[st]+nums[end]<sum){
                        st++;
                    }
                    else if(nums[st]+nums[end]>sum){
                        end--;
                    }
                    else{
                        s.insert({nums[i],nums[j],nums[st],nums[end]});
                        st++;
                        end--;
                    }
                }
            }
        }
        vector<vector<int>>v(s.begin(),s.end());
        return v;
        
    }
};







































// sort(nums.begin(),nums.end());
        // set<vector<int>> s; 
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         int st=j+1,end=n-1,sum=t-nums[i]-nums[j];
        //             while(st<end)
        //             {
        //                 if((nums[st]+nums[end])<sum)
        //                 {
        //                     st++;
        //                 }
        //                 else if((nums[st]+nums[end])>sum)
        //                 {
        //                     end--;
        //                 }
        //                 else
        //                 {
        //                     s.insert({nums[i],nums[j],nums[st],nums[end]});
        //                     st++;
        //                     end--;
        //                 }
        //             }
        //     }
        // }
        // vector<vector<int>> v(s.begin(),s.end());
        // return v; 