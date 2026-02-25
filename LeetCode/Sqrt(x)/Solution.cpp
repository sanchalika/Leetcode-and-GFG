1class Solution {
2public:
3    int mySqrt(int x) {
4        int low = 1;
5        int high = x;
6        int ans = 1;
7        if(x==0) return 0;
8        while (low <= high) {
9            int mid = low + (high - low) / 2;
10            if (mid <= x/mid) {
11                ans = mid;
12                low = mid + 1;
13            } else {
14                high = mid - 1;
15            }
16        }
17        return ans;
18    }
19};