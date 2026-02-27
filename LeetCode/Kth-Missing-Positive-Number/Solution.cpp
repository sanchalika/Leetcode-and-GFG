1class Solution {
2public:
3    int findKthPositive(vector<int>& arr, int k) {
4        int n = arr.size();
5        int low = 0;
6        int high = n - 1;
7        while (low <= high) {
8            int mid = low + (high - low) / 2;
9            int missing = arr[mid] - (mid + 1);
10            if (missing < k) {
11                low = mid + 1;
12            } else {
13                high = mid - 1;
14            }
15        }
16        return (high + 1 + k);
17    }
18};