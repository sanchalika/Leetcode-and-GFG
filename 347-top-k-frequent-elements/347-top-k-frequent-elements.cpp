class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++) m[nums[i]]++;
        
        priority_queue<pair<int,int>> pq;
        for(auto itr= m.begin();itr!= m.end();itr++) {
            pq.push(pair(itr->second,itr->first));
        }
        vector<int> res;
        while(k--) {
            pair<int,int> temp = pq.top();
            pq.pop();
            res.push_back(temp.second);
        }
        return res;
    }
};



// vector<int> topKFrequent(vector<int>& nums, int k) {
//         int n=nums.size();
        
//         vector<int>res;
        
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
        
//         unordered_map<int,int>mp;
//         for(int i=0;i<n;i++){
//             mp[nums[i]]++;
//         }
        
//         for(auto i=mp.begin();i<mp.end();i++){
            
//             minh.push({i.second,i.first});
//             if(minh.size()>0){
//                 minh.pop();
//             }
//         }
        
//         while(minh.size()>0){
//             res.push_back(mp.top().second);
//         }
        
//         return res;