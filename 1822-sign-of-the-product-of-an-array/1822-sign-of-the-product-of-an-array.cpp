class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negs=0;
        for(int num: nums){
            if(num==0){
                return 0;
            }else if(num<0){
                negs++;
            }
        }
        return negs %2 ==0 ?1:-1;
    }
};