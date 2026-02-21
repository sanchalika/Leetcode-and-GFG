1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        int n = nums.size();
5        int cnt1 = 0, cnt2 = 0;
6        int ele1 = INT_MIN, ele2 = INT_MIN;
7        for (int i = 0; i < n; i++) {
8            if (cnt1 == 0 && ele2 != nums[i]) {
9                cnt1 = 1;
10                ele1 = nums[i];
11            } else if (cnt2 == 0 && ele1 != nums[i]) {
12                cnt2 = 1;
13                ele2 = nums[i];
14            } else if (nums[i] == ele1)
15                cnt1++;
16            else if (nums[i] == ele2)
17                cnt2++;
18            else {
19                cnt1--, cnt2--;
20            }
21        }
22        vector<int> ans;
23        cnt1 = 0, cnt2 = 0;
24        for (int i = 0; i < n; i++) {
25            if (ele1 == nums[i]) {
26                cnt1++;
27            }
28            if (ele2 == nums[i]) {
29                cnt2++;
30            }
31        }
32        int mini = (int)(n / 3) + 1;
33        if (cnt1 >= mini)
34            ans.push_back(ele1);
35        if (cnt2 >= mini)
36            ans.push_back(ele2);
37        sort(ans.begin(), ans.end());
38        return ans;
39    }
40};