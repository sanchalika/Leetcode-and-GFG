1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        vector<int>merged;
5        int i=0, j=0;
6        while(i<m && j<n){
7            if(nums1[i]<=nums2[j]){
8                merged.push_back(nums1[i]);
9                i++;
10            }
11            else{
12                merged.push_back(nums2[j]);
13                j++;
14            }
15        }
16        while(i<m){
17           merged.push_back(nums1[i]);
18           i++; 
19        }
20        while(j<n){
21           merged.push_back(nums2[j]);
22           j++; 
23        }
24        for(int k=0; k<m+n;k++){
25            nums1[k]=merged[k];
26        }
27    }
28};