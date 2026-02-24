1class Solution {
2public:
3    void merge(vector<int>& arr, int low, int mid, int high) {
4        vector<int> temp;
5        int left = low, right = mid + 1;
6        while (left <= mid && right <= high) {
7            if (arr[left] <= arr[right])
8                temp.push_back(arr[left++]);
9            else
10                temp.push_back(arr[right++]);
11        }
12        while (left <= mid)
13            temp.push_back(arr[left++]);
14        while (right <= high)
15            temp.push_back(arr[right++]);
16        for (int i = low; i <= high; i++)
17            arr[i] = temp[i - low];
18    }
19    int countPairs(vector<int>& arr, int low, int mid, int high){
20        int count=0;
21        int right = mid+1;
22        for(int i=low; i<=mid; i++){
23            while(right<=high && arr[i]>2LL *arr[right]) right++;
24            count+=(right - (mid+1));
25        }
26        return count;
27    }
28    int mergeSort(vector<int>& arr, int low, int high) {
29        int count=0;
30        if (low >= high) return count;
31        int mid = (low + high) / 2;
32        count+=mergeSort(arr, low, mid);
33        count+=mergeSort(arr, mid + 1, high);
34        count+=countPairs(arr, low, mid, high);
35        merge(arr, low, mid, high);
36        return count;
37    }
38    int reversePairs(vector<int>& nums) {
39        int n = nums.size();
40        return mergeSort(nums, 0, n-1);       
41    }
42};