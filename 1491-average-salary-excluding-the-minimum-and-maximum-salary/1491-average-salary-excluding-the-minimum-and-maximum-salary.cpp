class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        sort(salary.begin(),salary.end());
        int maxi=salary[n-1];
        int mini=salary[0];
        double sum=0;
        for(int i=0;i<n;i++){
            sum+=salary[i];
        }
        return ((sum-(maxi+mini))/(n-2));
    }
};