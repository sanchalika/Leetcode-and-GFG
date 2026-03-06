1class Solution {
2public:
3    int char2num(char a) {
4        switch (a) {
5            case 'I': return 1;
6            case 'V': return 5;
7            case 'X': return 10;
8            case 'L': return 50;
9            case 'C': return 100;
10            case 'D': return 500;
11            case 'M': return 1000;
12            default: return 0;
13        }
14    }
15    int romanToInt(string s) {
16        int summ=0;
17        for(int i=0; i<s.length();i++){
18            if(i+1 < s.length() && char2num(s[i]) < char2num(s[i+1])){
19                summ-=char2num(s[i]);
20            }else{
21                summ+=char2num(s[i]);
22            }
23        }
24        return summ;
25    }
26};