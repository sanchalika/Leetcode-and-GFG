1class Solution {
2public:
3    int mySqrt(int x) {
4        int low = 1;
5        int high = x;
6        int ans = 1;
7        if (x == 0)
8            return 0;
9        while (low <= high) {
10            int mid = low + (high - low) / 2;
11            if (mid <= x / mid) {
12                ans = mid;
13                low = mid + 1;
14            } else {
15                high = mid - 1;
16            }
17        }
18        return ans;
19    }
20};