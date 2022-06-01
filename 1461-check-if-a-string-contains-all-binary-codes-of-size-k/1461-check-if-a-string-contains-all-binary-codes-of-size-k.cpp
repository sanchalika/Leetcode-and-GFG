class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>s.size()) return false;
        unordered_set<string>u_set;
        for(int i=k;i<s.size()+1;i++){
            u_set.insert(s.substr(i-k,k));
        }
        return u_set.size()==pow(2,k);
    }
};