class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int ans=nums[0];
        int n=nums.size();
        if(n==1 && (ans==1 || ans==-1)) return 1;
        for(int i=1;i<n;i++){
          ans=__gcd(ans,nums[i]);
            if(ans==1)
                return 1;   
        }
        return 0;
    }
};