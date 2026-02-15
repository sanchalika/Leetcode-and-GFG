1class Solution {
2public:
3    string addBinary(string a, string b) {
4        string &res = (a.size() >= b.size()) ? a : b; 
5        int i = a.size() - 1, j = b.size() - 1;
6        int k = res.size() - 1;
7        int C = 0;
8
9        while (k >= 0) {
10            int A = i < 0 ? 0 : a[i] & 1; 
11            int B = j < 0 ? 0 : b[j] & 1; 
12
13            int S = (A ^ B) ^ C; 
14            int C_out = ((A ^ B) & C) | (A & B);
15
16            res[k] = S + '0'; 
17
18            C = C_out;
19            i--; j--; k--; 
20        }
21
22        return C ? (res.insert(res.begin(), '1'), res) : res;
23    }
24};
25