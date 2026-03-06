1class Solution {
2public:
3    bool isPalindrome(string s) {
4        int l = 0;
5        int r = s.length() - 1;
6        while (l <= r) {
7            if (!isalnum(s[l])) {
8                l++;
9                continue;
10            }
11            if (!isalnum(s[r])) {
12                r--;
13                continue;
14            }
15            if (tolower(s[l]) != tolower(s[r])) {
16                return false;
17            } else {
18                l++;
19                r--;
20            }
21        }
22        return true;
23    }
24};