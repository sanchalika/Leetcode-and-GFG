int n = (int)nums.size();
int ans = 0;
for(int r = 0; r < n; r ++){
    set<int> even;
    set<int> odd;
    for(int l = r; l >= 0; l --){
        if(nums[l] % 2) odd.insert(nums[l]);
        else even.insert(nums[l]);
        if(odd.size() == even.size()){
            ans = max(ans, r - l + 1);
        }
    }
}
return ans;