1class Solution {
2private:
3    void swapIfGreater(vector<int>& nums1, vector<int>& nums2, int idx1,
4                       int idx2) {
5        if (nums1[idx1] > nums2[idx2]) {
6            swap(nums1[idx1], nums2[idx2]);
7        }
8    }
9
10public:
11    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
12        int len = (n + m);
13        int gap = (len / 2) + (len % 2);
14        while (gap > 0) {
15            int left = 0;
16            int right = left + gap;
17            while (right < len) {
18                if (left < m && right >= m) {
19                    swapIfGreater(nums1, nums2, left, right - m);
20                } else if (left >= m) {
21                    swapIfGreater(nums2, nums2, left - m, right - m);
22                } else {
23                    swapIfGreater(nums1, nums1, left, right);
24                }
25
26                left++;
27                right++;
28            }
29            if (gap == 1)
30                break;
31            gap = (gap / 2) + (gap % 2);
32        }
33        for (int i = 0; i < n; i++) {
34            nums1[m + i] = nums2[i];
35        }
36    }
37};