1class Solution {
2public:
3    bool search(int i, int j, int n, int m, vector<vector<char>>& board,
4                string word, int k) {
5        if (k == word.size())
6            return true;
7        if (i < 0 || j < 0 || i >= n || j >= m || board[i][j] != word[k])
8            return false;
9        char ch = board[i][j];
10        board[i][j] = '#';
11        bool op1 = search(i + 1, j, n, m, board, word, k + 1);
12        bool op2 = search(i, j + 1, n, m, board, word, k + 1);
13        bool op3 = search(i - 1, j, n, m, board, word, k + 1);
14        bool op4 = search(i, j - 1, n, m, board, word, k + 1);
15        board[i][j] = ch;
16        return op1 || op2 || op3 || op4;
17    }
18    bool exist(vector<vector<char>>& board, string word) {
19        int n = board.size();
20        int m = board[0].size();
21        for (int i = 0; i < n; i++) {
22            for (int j = 0; j < m; j++) {
23                if (board[i][j] == word[0]) {
24                    if (search(i, j, n, m, board, word, 0)) {
25                        return true;
26                    }
27                }
28            }
29        }
30        return false;
31    }
32};