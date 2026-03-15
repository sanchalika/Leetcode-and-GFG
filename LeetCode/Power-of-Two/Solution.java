1class Solution {
2    public boolean isPowerOfTwo(int n) {
3        if(n==0) return false;
4        return n>0 && ((n&(n-1))==0);
5    }
6}