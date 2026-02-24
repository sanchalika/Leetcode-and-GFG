1class Solution {
2public:
3    int search(vector<int>& arr, int target) {
4        int l = 0, r = arr.size() - 1;
5        while (l <= r) {
6            int mid = l + (r - l) / 2;
7            if (arr[mid] == target) {
8                return mid;
9            } else if (arr[l] <= arr[mid]) {
10                if (arr[l] <= target && target <= arr[mid]) {
11                    r = mid - 1;
12                } else {
13                    l = mid + 1;
14                }
15            } else {
16                if (arr[mid] <= target && target <= arr[r]) {
17                    l = mid + 1;
18                } else {
19                    r = mid - 1;
20                }
21            }
22        }
23        return -1;
24    }
25};