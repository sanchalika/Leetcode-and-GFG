class Solution {
public:
    void subseq( int ind, int target, int k, vector<int>& ds, vector<vector<int>>& ans ){
        if( ds.size()==k ){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }

        for( int i = ind; i<=9; i++ ){
            if( i>target ){
                break;
            }
            //take:
            ds.push_back(i);
            subseq( i+1, target-i, k, ds, ans);
            ds.pop_back();
        }

    }


    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ds;
        vector<vector<int>> ans;

        subseq( 1, n, k, ds, ans );
        return ans;
    }
};