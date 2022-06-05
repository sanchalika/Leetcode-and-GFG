// class Solution {
// public:
//     void addSolution(vector<vector<int>> &ans, vector<vector<int>>&board, int n){
        
//         vector<int>temp;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 temp.push_back(board[i][j]);
//             }
//         }
//         ans.push_back(temp);
//     }
//     bool isSafe(int row, int col, vector<vector<int>>&board, int n){
//         int x=row;
//         int y=col;
//         // check for same row
//         while(y>=0){
//             if(board[x][y]==1)
//                 return false;
//             y--;
//         }
//         x=row;
//         y=col;
        
//         //check for diagonal
//         while(x>=0 && y>=0){
//             if(board[x][y]==1)
//                 return false;
//             y--;
//             x--;
//         }
//         x=row;
//         y=col;
//         while(x<n && y>=0){
//             if(board[x][y]==1)
//                 return false;
//             y--;
//             x++;
//         }
//         return true;
//     }
//     void solve(int col, vector<vector<int>> &ans, vector<vector<int>>&board,int n){
//         if(col==n){
//             addSolution(ans,board,n);
//             return;
//         }
        
//         //solve 1 case and rest recursion will take care
        
//         for(int row=0;row<n;row++){
//             if(isSafe(row,col,board,n)){
                
//                 // if placing queen is safe
                
//                 board[row][col]=1;
//                 solve(col+1,ans,board,n);
                
//                 // backtrack
                
//                 board[row][col]=0;
//             }
//         }
//     }
//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<int>>board(n, vector<int>(n,0));
//         vector<vector<int>>ans;
//         solve(0,ans,board,n);
//         return ans;
//     }
// };
class Solution {
	vector<vector<string>> ans;
public:
	bool issafe(int r,int c,vector<string>&v,int n){
		//column check 
		for(int i=0;i<=r;i++){
			if(v[i][c]=='Q') return false;
		}
		//diagonal check upper left side
		int row=r,col=c;
		while(row>=0 && col>=0){
			if(v[row][col]=='Q') return false;
			row--,col--;
		}
		//diagonal check upper right side
		row=r,col=c;
		while(row>=0 && col<n){
			if(v[row][col]=='Q') return false;
			row--,col++;
		}
		return true;
	}
	void helper(int r,vector<string> &v,int n){
		 if(r==n){ //if row reaches end of the board 
			 ans.push_back(v);
			 return ;
		 }
		for(int i=0;i<n;i++){  //fixing row and traversing in column
			if(issafe(r,i,v,n)){
				v[r][i]='Q';
				helper(r+1,v,n);
				v[r][i]='.';
			}
		}
	}
	vector<vector<string>> solveNQueens(int n) {
		vector<string> v;
		string s(n,'.');
		for(int i=0;i<n;i++) v.push_back(s);
		helper(0,v,n);
		return ans;
	}
};