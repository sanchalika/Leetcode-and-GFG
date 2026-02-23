1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        int left = m - 1;
5        int right = 0;
6        while (left >= 0 && right < n) {
7            if (nums1[left] > nums2[right]) {
8                swap(nums1[left], nums2[right]);
9                left--;
10                right++;
11            } else {
12                break;
13            }
14        }
15        sort(nums1.begin(), nums1.begin() + m);
16        sort(nums2.begin(), nums2.begin() + n);
17        for (int i = 0; i < n; i++) {
18            nums1[m + i] = nums2[i];
19        }
20    }
21};