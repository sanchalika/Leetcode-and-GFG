class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int n=arr.size();
        vector<int>v;
        
        priority_queue<pair<int,int>>p;
        
        for(int i=0;i<n;i++){
            p.push({abs(arr[i]-x),arr[i]});
            if(p.size()>k){
                p.pop();
            }
        }
        
        while(p.size()>0){
            v.push_back(p.top().second);
            p.pop();
        }
        sort(v.begin(),v.end());
        return v;
    }
};