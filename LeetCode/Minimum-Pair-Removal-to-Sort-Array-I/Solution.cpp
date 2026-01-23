1class Solution {
2public:
3    int minPair(vector<int> v){
4        int minSum = 1e9;
5        int pos = -1;
6        for(int i = 0; i < (int)v.size() - 1; i ++){
7            if(v[i] + v[i + 1] < minSum){
8                minSum = v[i] + v[i + 1];
9                pos = i;
10            }
11        }
12        return pos;
13    }
14    void mergePair(vector<int> &v, int pos){
15        v[pos] += v[pos + 1];
16        v.erase(v.begin() + pos + 1);
17    }
18    int minimumPairRemoval(vector<int>& nums) {
19        int ops = 0;
20        while(!is_sorted(nums.begin(), nums.end())){
21            mergePair(nums, minPair(nums));
22            ops += 1;
23        }
24        return ops;
25    }
26};