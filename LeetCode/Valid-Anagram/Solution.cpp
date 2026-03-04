1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if (s.length() != t.length())
5            return false;
6        sort(s.begin(), s.end());
7        sort(t.begin(), t.end());
8        return s == t;
9    }
10};