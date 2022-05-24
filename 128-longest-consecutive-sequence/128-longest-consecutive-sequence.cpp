class Solution {
public:
int longestConsecutive(vector<int>& nums) {
        unordered_set<int>hash;
        
        int lcs = 0;
        
        for(int it : nums)
            hash.insert(it);
        
        for(int it : nums)
        {
            if(!hash.count(it-1))
            {
                int curNum = it;
                int streak = 1;
                
                while(hash.count(curNum+1))
                {
                    curNum += 1;
                    streak += 1;
                }
                lcs = max(lcs,streak);
            }
        }
        return lcs;
    }
};