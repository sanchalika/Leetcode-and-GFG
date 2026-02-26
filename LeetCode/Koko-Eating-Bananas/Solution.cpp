1class Solution {
2private:
3    int findMax(vector<int>& v){
4        int maxi=INT_MIN;
5        int n=v.size();
6        for(int i=0; i<n; i++){
7            maxi=max(maxi, v[i]);
8        }
9        return maxi;
10    }
11    long long calculateHours(vector<int>& v, int hourly){
12        long long totalH=0;
13        int n=v.size();
14        for(int i=0; i<n; i++){
15            totalH+=ceil((double)v[i]/(double)hourly);
16        }
17        return totalH;
18    }
19public:
20    int minEatingSpeed(vector<int>& v, int h) {
21        int low=1, high=findMax(v);
22        while(low<=high){
23            int mid=low+(high-low)/2;
24            long long totalH=calculateHours(v, mid);
25            if(totalH<=h){
26                high=mid-1;
27            }
28            else{
29                low=mid+1;
30            }
31        }
32        return low;
33    }
34};