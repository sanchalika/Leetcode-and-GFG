class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0, h=s.size(), n=h-1;
        while(l<=n){
        swap(s[l], s[n]);
        l++;
        n--;
        }
    }
};