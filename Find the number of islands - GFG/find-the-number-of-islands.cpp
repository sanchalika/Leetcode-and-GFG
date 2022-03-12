// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void dfs(vector<vector<char>>& grid,int i,int j,int row,int col){
       if(i<0 ||i>=row || j<0||j>=col ){
           return ;
       }
       if(grid[i][j]=='1'){
           grid[i][j]='2';
           dfs(grid,i+1,j,row,col);
           dfs(grid,i,j+1,row,col);
           dfs(grid,i-1,j,row,col);
           dfs(grid,i,j-1,row,col);
           dfs(grid,i+1,j+1,row,col);
           dfs(grid,i-1,j-1,row,col);
           dfs(grid,i-1,j+1,row,col);
           dfs(grid,i+1,j-1,row,col);
       }
   }
    public:
   // Function to find the number of islands.
   int numIslands(vector<vector<char>>& grid) {
       // Code here
   int row=grid.size();
   int col=grid[0].size();
   int count=0;
   for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
           if(grid[i][j]=='1'){
               
               count++;
               dfs(grid,i,j,row,col);
           }
       }
   }
       return count;
   }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends