1class Solution {
2public:
3    string reverseWords(string s) {
4        string ans = "";
5        reverse(s.begin(), s.end());
6        for (int i = 0; i < s.length(); i++) {
7            string word = "";
8            while (i < s.length() && s[i] != ' ') {
9                word += s[i];
10                i++;
11            }
12            reverse(word.begin(), word.end());
13            if (word.length() > 0) {
14                ans += " " + word;
15            }
16        }
17        return ans.substr(1);
18    }
19};