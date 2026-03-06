1class Solution {
2public:
3    int char2num(char ch) {
4        switch (ch) {
5        case 'I':
6            return 1;
7        case 'V':
8            return 5;
9        case 'X':
10            return 10;
11        case 'L':
12            return 50;
13        case 'C':
14            return 100;
15        case 'D':
16            return 500;
17        case 'M':
18            return 1000;
19        default:
20            return 0;
21        }
22    }
23    int romanToInt(string s) {
24        int sum = 0;
25        for (int i = 0; i < s.length(); i++) {
26            if ((i + 1) < s.length() && char2num(s[i]) < char2num(s[i+1])) {
27                sum -= char2num(s[i]);
28            } else {
29                sum += char2num(s[i]);
30            }
31        }
32        return sum;
33    }
34};