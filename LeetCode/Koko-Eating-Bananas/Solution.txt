1class Solution {
2public:
3    int findMax(vector<int>& piles) {
4        int maxi = INT_MIN;
5        int n = piles.size();
6        for (int i = 0; i < n; i++) {
7            maxi = max(maxi, piles[i]);
8        }
9        return maxi;
10    }
11    long long calculateTotalHrs(vector<int>& v, int hourly){
12        long long totalH=0;
13        int n=v.size();
14        for(int i=0; i<n; i++){
15            totalH+=ceil((double)v[i]/(double)hourly);
16        }
17        return totalH;
18    }
19    int minEatingSpeed(vector<int>& piles, int h) {
20        int low = 1;
21        int high = findMax(piles);
22        while (low <= high) {
23            int mid = low + (high - low) / 2;
24            long long totalHrs = calculateTotalHrs(piles, mid);
25            if (totalHrs <= h) {
26                high = mid - 1;
27            } else {
28                low = mid + 1;
29            }
30        }
31        return low;
32    }
33};