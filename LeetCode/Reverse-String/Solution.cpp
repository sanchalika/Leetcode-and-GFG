1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int l=0;
5        int r=s.size()-1;
6        while(l<=r){
7            swap(s[l], s[r]);
8            l++;
9            r--;
10        }
11    }
12};