1class Solution {
2public:
3    int findKthPositive(vector<int>& arr, int k) {
4        int n=arr.size();
5        for(int i=0; i<n; i++){
6            if(arr[i]<=k){
7                k++;
8            }else{
9                break;
10            }
11        }
12        return k;
13    }
14};