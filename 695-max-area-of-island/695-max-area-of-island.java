class Solution {
    
    int[] di={-1,0,1,0};
    int[] dj={0,-1,0,1};
    
    public int findarea(int[][] grid, boolean[][] vis, int i, int j){
        int n=grid.length;
        int m=grid[0].length;
        
        if(i>=n || j>=m || i<0 ||j<0) return 0;
        if(grid[i][j]==0 || vis[i][j]) return 0;
        
        int nextAns=0;
        vis[i][j]=true;
        
        for(int d=0;d<4;d++){
            nextAns+=findarea(grid,vis,i+di[d],j+dj[d]);
        }
        return nextAns+1;
    }
    public int maxAreaOfIsland(int[][] grid) {
        int n= grid.length;
        int m=grid[0].length;
        boolean[][] vis=new boolean[n][m];
        int ans=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==false)
                    ans=Math.max(ans, findarea(grid,vis,i,j));
            }
        }
        return ans;
    }
}