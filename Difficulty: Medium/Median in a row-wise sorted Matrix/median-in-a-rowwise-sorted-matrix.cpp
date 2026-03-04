class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m= mat[0].size();
        vector<int>v;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                v.push_back(mat[i][j]);
            }
        }
        sort(v.begin(), v.end());
        return v[(m*n)/2];
    }
};
