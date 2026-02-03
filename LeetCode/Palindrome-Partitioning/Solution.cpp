1class Solution {
2public:
3    bool isPalindrome(string s, int start, int end){
4        while(start<=end){
5            if(s[start++]!=s[end--]){
6                return false;
7            }
8        }
9        return true;
10    }
11    void func(int idx, string s, vector<string>&path, vector<vector<string>>&res){
12        if(s.size()==idx){
13            res.push_back(path);
14            return;
15        }
16        for(int i=idx; i<s.size(); i++){
17            if(isPalindrome(s, idx, i)){
18                path.push_back(s.substr(idx, i-idx+1));
19                func(i+1, s, path, res);
20                path.pop_back();
21            }
22        }
23    }
24    vector<vector<string>> partition(string s) {
25        vector<vector<string>>res;
26        vector<string>path;
27        func(0, s, path, res);
28        return res;
29    }
30};