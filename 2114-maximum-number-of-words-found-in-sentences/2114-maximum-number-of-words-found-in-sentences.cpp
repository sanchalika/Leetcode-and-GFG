class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int cnt=0;
        int maxi=0;
        for(int i=0;i<sentences.size();i++){
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    cnt++;
                }
            }
        cnt++;
        maxi=max(maxi,cnt);
        cnt=0;
        }
        return maxi;
    }
};