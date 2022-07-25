class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        int m=nums1.size();
        int n=nums2.size();
        unordered_set<int>S1;
        unordered_set<int>S2;
        for(int i=0;i<m;i++){
            S1.insert(nums1[i]);
        }
        for(int j=0;j<n;j++){
            S2.insert(nums2[j]);
        }
        for(auto it1=S1.begin(); it1!=S1.end(); it1++) {
             for(auto it2=S2.begin(); it2!=S2.end(); it2++) {
                 if(*it1==*it2) {
                     res.push_back(*it1);
                 }
             }
        }
       return res;
    }
};