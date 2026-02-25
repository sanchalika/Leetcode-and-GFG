class Solution {
public:
    long long multiply(long long number, int n, long long m) {
        long long ans = 1;
        for(int i = 1; i <= n; i++) {
            ans *= number;
            if(ans > m) return ans;   // prevent overflow
        }
        return ans;
    }

    int nthRoot(int n, int m) {
        if(m == 0) return 0;   // 🔥 important edge case

        long long low = 1;
        long long high = m;

        while(low <= high) {
            long long mid = low + (high - low) / 2;

            long long val = multiply(mid, n, m);

            if(val == m) return mid;
            else if(val < m) low = mid + 1;
            else high = mid - 1;
        }

        return -1;
    }
};