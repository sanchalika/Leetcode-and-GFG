class Solution {
public:
    int kthElement(vector<int> &nums1, vector<int> &nums2, int k) {
        
        if (nums2.size() < nums1.size())
            return kthElement(nums2, nums1, k);
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        int low = max(0, k - n2);
        int high = min(k, n1);

        while (low <= high) {
            
            int cut1 = (low + high) >> 1;
            int cut2 = k - cut1;

            int left1 = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
            int left2 = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1];
            
            int right1 = (cut1 == n1) ? INT_MAX : nums1[cut1];
            int right2 = (cut2 == n2) ? INT_MAX : nums2[cut2];

            if (left1 <= right2 && left2 <= right1) {
                return max(left1, left2);
            }
            else if (left1 > right2) {
                high = cut1 - 1;
            }
            else {
                low = cut1 + 1;
            }
        }
        return -1;  // just safety
    }
};