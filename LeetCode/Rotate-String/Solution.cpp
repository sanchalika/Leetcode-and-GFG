1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        if (s.length() != goal.length())
5            return false;
6        string temp = s + s;
7        return temp.find(goal) != string::npos;
8    }
9};