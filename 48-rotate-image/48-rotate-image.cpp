class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int height=matrix.size();
        int width=matrix[0].size();
        int temp;
       
        //diagonally fliing
        for(int i=0;i<height;i++){
            for(int j=i+1;j<width;j++){
                temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        // horizontal flipping
        for(int i=0;i<height;++i){
            for(int j=0;j<width/2;++j){
                temp=matrix[i][j];
                matrix[i][j]=matrix[i][width-1-j];
                matrix[i][width-1-j]=temp;
            }
        }
    }
};