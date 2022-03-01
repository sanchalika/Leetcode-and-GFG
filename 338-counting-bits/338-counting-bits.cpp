class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>mem(n+1);
        mem[0]=0;
        for(int i=1;i<=n;i++){
            mem[i]=mem[i/2] + i%2; // x/2=y, for even no. number of set bits in x is same and in odd numbers its 1+x
        }
        return mem;
        
    }
};