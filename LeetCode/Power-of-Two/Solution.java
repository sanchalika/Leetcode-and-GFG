1class Solution {
2    public boolean isPowerOfTwo(int n) {
3        if (n == 0)
4            return false;
5        return n > 0 && ((n & (n - 1)) == 0);
6    }
7}