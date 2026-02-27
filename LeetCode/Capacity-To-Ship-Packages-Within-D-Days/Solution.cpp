1class Solution {
2public:
3    int findMax(vector<int>& weights, int n) {
4        int maxi = INT_MIN;
5        for (int i = 0; i < n; i++) {
6            maxi = max(maxi, weights[i]);
7        }
8        return maxi;
9    }
10    int sumOfWeights(vector<int>& weights, int n) {
11        int total = 0;
12        for (int i = 0; i < n; i++) {
13            total += weights[i];
14        }
15        return total;
16    }
17    int noOfDays(vector<int>& weights, int capacity) {
18        int day = 1;
19        int load = 0;
20        int n = weights.size();
21        for (int i = 0; i < n; i++) {
22            if (load + weights[i] > capacity) {
23                day = day + 1;
24                load = weights[i];
25            } else {
26                load += weights[i];
27            }
28        }
29        return day;
30    }
31    int shipWithinDays(vector<int>& weights, int days) {
32        int n = weights.size();
33        int low = findMax(weights, n);
34        int high = sumOfWeights(weights, n);
35        while (low <= high) {
36            int mid = low + (high - low) / 2;
37            if (noOfDays(weights, mid) <= days) {
38                high = mid - 1;
39            } else {
40                low = mid + 1;
41            }
42        }
43        return low;
44    }
45};