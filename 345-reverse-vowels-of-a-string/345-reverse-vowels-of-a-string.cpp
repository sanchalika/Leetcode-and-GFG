class Solution {
private:
    bool isVowel(char c) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||c == 'A' 
           || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
        else
            return false;
    }
public:
    string reverseVowels(string s) {
        int l = 0;
        int r = s.length()-1;
        
        while(l <= r){
             if(!isVowel(s[l])){
                 l++;
                 continue;
             }
                if(!isVowel(s[r])){
                 r--;
                 continue;
             }
            
                swap(s[l],s[r]);
                l++;
                r--;
        }
        return s;
        
    }
};