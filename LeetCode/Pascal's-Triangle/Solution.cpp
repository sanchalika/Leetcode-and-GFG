1class Solution {
2public:
3    vector<int> generateRow(int row) {
4        long long ans = 1;
5        vector<int> ansRow;
6        ansRow.push_back(1);
7        for (int col = 1; col < row; col++) {
8            ans = ans * (row - col);
9            ans = ans / col;
10            ansRow.push_back(ans);
11        }
12        return ansRow;
13    }
14    vector<vector<int>> generate(int numRows) {
15        vector<vector<int>> ans;
16        for (int i = 1; i <= numRows; i++) {
17            ans.push_back(generateRow(i));
18        }
19        return ans;
20    }
21};