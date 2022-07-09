class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<string>res(numRows);
        int i = 0, d = -1;
        for(char c : s) {
            res[i] += c;
            if(i == 0 || i == numRows-1) d = d > 0 ? -1 : 1; // this direction thing is like a light switch... lol
            i += d;
        }
        for(int i = 1; i < res.size(); i++)
            res[0].append(res[i]);
        return res[0];
    }
};