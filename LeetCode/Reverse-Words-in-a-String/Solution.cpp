1class Solution {
2public:
3    string reverseWords(string s) {
4       reverse(s.begin(), s.end());
5        int n = s.size();
6        int left = 0;
7        int right = 0;
8        int i = 0;
9        while (i < n) {
10            while (i < n && s[i] == ' ')
11                i++;
12            if (i == n)
13                break;
14            while (i < n && s[i] != ' ') {
15                s[right++] = s[i++];
16            }
17            reverse(s.begin() + left, s.begin() + right);
18            s[right++] = ' ';
19            left = right;
20            i++;
21        }
22        s.resize(right - 1);
23        return s; 
24    }
25};