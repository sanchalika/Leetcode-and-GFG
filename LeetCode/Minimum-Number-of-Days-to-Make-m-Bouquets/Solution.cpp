1class Solution {
2public:
3    int findMax(vector<int>& bloomDay, int n) {
4        int maxi = INT_MIN;
5        for (int i = 0; i < n; i++) {
6            maxi = max(maxi, bloomDay[i]);
7        }
8        return maxi;
9    }
10    int findMini(vector<int>& bloomDay, int n) {
11        int mini = INT_MAX;
12        for (int i = 0; i < n; i++) {
13            mini = min(mini, bloomDay[i]);
14        }
15        return mini;
16    }
17    bool isPossible(vector<int>& bloomDay, int days, int m, int k) {
18        int n = bloomDay.size();
19        int cnt = 0;
20        int noOfBouquets = 0;
21        for (int i = 0; i < n; i++) {
22            if (bloomDay[i] <= days) {
23                cnt++;
24            } else {
25                noOfBouquets += (cnt / k);
26                cnt = 0;
27            }
28        }
29        noOfBouquets += (cnt / k);
30        if (noOfBouquets >= m) {
31            return true;
32        } else {
33            return false;
34        }
35    }
36    int minDays(vector<int>& bloomDay, int m, int k) {
37        long long n = bloomDay.size();
38        if (n < (1LL*m * 1LL*k))
39            return -1;
40        int low = findMini(bloomDay, n);
41        int high = findMax(bloomDay, n);
42        while (low <= high) {
43            int mid = low + (high - low) / 2;
44            if (isPossible(bloomDay, mid, m, k)) {
45                high = mid - 1;
46            } else {
47                low = mid + 1;
48            }
49        }
50        return low;
51    }
52};