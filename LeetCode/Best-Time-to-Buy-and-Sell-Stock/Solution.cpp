1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int n = prices.size();
5        int minPrice = prices[0];
6        int maxProfit = 0;
7        for (int i = 1; i < n; i++) {
8            int profit = (prices[i] - minPrice);
9            maxProfit = max(maxProfit, profit);
10            minPrice = min(prices[i], minPrice);
11        }
12        return maxProfit;
13    }
14};