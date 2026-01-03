1class Solution {
2public:
3    int numOfWays(int n) {
4        const int MOD = 1000000007;
5        long long A = 6, B = 6;
6
7        for (int i = 2; i <= n; i++) {
8            long long newA = (2 * A + 2 * B) % MOD;
9            long long newB = (2 * A + 3 * B) % MOD;
10            A = newA;
11            B = newB;
12        }
13
14        return (A + B) % MOD;
15    }
16};