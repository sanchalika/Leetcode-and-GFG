class Solution {
public:
int longestConsecutive(vector<int>& nums) {
unordered_set<int>hashSet;
for(auto i : nums){
hashSet.insert(i);
}

    int longestStreak = 0 ; //it stores max of all consecutive sequence
    for(auto i : nums){
        if(!hashSet.count(i-1)){
            int currentNum = i;
            int currentStreak = 1; //this is the length of the iteratio we initialise it with 1
            while(hashSet.count(currentNum+1)){  //we check if next number exist or not like for 100 we check if 101 exist or not
                currentNum+=1; //if it does we increase
                currentStreak+=1; //and we increase the counter pointer which counts the number of iteration
            }
            longestStreak = max(longestStreak , currentStreak);
        }
    }
    return longestStreak;
}
};