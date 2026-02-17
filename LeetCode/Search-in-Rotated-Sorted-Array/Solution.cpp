1class Solution {
2public:
3    int search(vector<int>& arr, int target) {
4        int l=0, r=arr.size()-1;
5        while(l<=r){
6            int mid=l+(r-l)/2;
7            if(arr[mid]==target) {
8                return mid;
9            }
10            else if(arr[l]<=arr[mid]){
11                if(arr[l]<=target && target<=arr[mid]){
12                    r=mid-1;
13                }
14                else{
15                    l=mid+1;
16                }
17            }
18            else{
19                if(arr[mid]<=target && target<=arr[r]){
20                    l=mid+1;
21                }
22                else{
23                    r=mid-1;
24                }
25            }
26        }
27        return -1;
28    }
29};