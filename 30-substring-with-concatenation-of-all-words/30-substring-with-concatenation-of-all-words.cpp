class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int> mp;
        int size=s.size();
        int num=words.size();
        int l=words[0].size();
        vector<int> ans;
        
        
        for(int i=0;i<num;i++)
        {
            mp[words[i]]++;
        }
        int count=mp.size();
        for(int i=0;i<=size-(num*l);i++)
        {
            unordered_map<string,int> check;
            for(int j=i;j<i+(num*l);j=j+l)
            {
                
                string ss=s.substr(j,l);
                check[ss]++;
            }
            if(mp==check)
                ans.push_back(i);
        }
        return ans;   
    }
};