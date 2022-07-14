class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
        
        int n=nums.size();
        unordered_map<int,int>mp;
        
        priority_queue<pair<int,int>>pq;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        for(auto it=mp.begin();it!=mp.end();it++){
            pq.push({-it->second,it->first});
        }
        
        while(pq.size()>0){
            int freq=pq.top().first;
            int ele=pq.top().second;
            
            for(int i=1;i<=abs(freq);i++){
                ans.push_back(ele);
            }
             pq.pop();
        }
        return ans;
    }
};

// class Solution {
// public:
// vector<int> frequencySort(vector<int>& nums)
// {
// priority_queue<pair<int,int>> maxh;
// unordered_map<int,int> m;
// vector<int>ans;

//     for(int i=0;i<nums.size();i++)
//     {
//         m[nums[i]]++;
//     }       
//     for(auto i=m.begin();i!=m.end();i++)
//     {
//         maxh.push({-i->second, i->first});
//     }    
//     while(maxh.size()>0)
//     {
//         int freq = maxh.top().first;
//         int element = maxh.top().second;
        
//         for(int i=1;i<=abs(freq);i++)
//         {
//             ans.push_back(element);
//         }
//         maxh.pop();
//     }
//     return ans;
// }
// };