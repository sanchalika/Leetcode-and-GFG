1class Solution {
2public:
3    char nextGreatestLetter(vector<char>& letters, char target) {
4        auto it = upper_bound(letters.begin(), letters.end(), target);
5        if (it == letters.end())
6            return letters[0];
7        return *it;
8    }
9};