1class Solution {
2public:
3    string largestOddNumber(string str) {
4        int n = str.length();
5        for (int i = n-1; i >=0 ; i--) {
6            int digit = str[i] - '0';
7            if (digit % 2 != 0) {
8                return str.substr(0, i+1);
9            }
10        }
11        return "";
12    }
13};