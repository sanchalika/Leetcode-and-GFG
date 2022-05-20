// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         sort(intervals.begin(),intervals.end());       
//         vector<vector<int>> ans;       
//         ans.push_back(intervals[0]);       
//         for(int i=1;i<intervals.size();i++)
//         {
//             auto it = ans.back();           
//             if((intervals[i][0]>=it[0]) && (intervals[i][0]<=it[1]))
//             {
//                 it[1] = max(it[1],intervals[i][1]);
//                 ans.pop_back();
//                 ans.push_back(it);
//             }
//             else
//                 ans.push_back(intervals[i]);
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergedIntervals;
        if(intervals.size() == 0) {
            return mergedIntervals; 
        }
        sort(intervals.begin(), intervals.end());
        vector<int> tempInterval = intervals[0]; 
        
        for(auto it : intervals) {
            if(it[0] <= tempInterval[1]) {
                tempInterval[1] = max(it[1], tempInterval[1]); 
            } else {
                mergedIntervals.push_back(tempInterval); 
                tempInterval = it; 
            }
        }
        mergedIntervals.push_back(tempInterval);
        return mergedIntervals; 
    }
};
