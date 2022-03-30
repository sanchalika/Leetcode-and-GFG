class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int cur = INT_MIN;
        int i;
        for(i=0;i<matrix.size();i++)
        {
            if(matrix[i][0]==target)
                return true;
            if(matrix[i][0]>target)
                break;
        }
        if(i==0)
            return false;
        for(int j=0;j<matrix[i-1].size();j++)
        {
            if(matrix[i-1][j]==target)
                return true;
        }
        return false;
    }
};