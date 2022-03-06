class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        while(n!=0){
            // checking last bit
            
            if(n&1){
                cnt++;
            }
            n=n>>1;
        }
        return cnt;
    }
};