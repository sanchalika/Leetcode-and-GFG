class Solution {
public:
    vector<int> weakest(vector<vector<int>>& mat, int k){
        int n=mat.size();
        set<pair<int,int>>st;
        for(int i=0;i<n;i++){
            int cnt=count(mat[i].begin(),mat[i].end(),1);
            st.insert({cnt,i});
        }
        vector<int>res;
        for(auto i:st){
            if(k==0)
                break;
            res.push_back(i.second);
            --k;
        }
        return res;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        return weakest(mat,k);
    }
};