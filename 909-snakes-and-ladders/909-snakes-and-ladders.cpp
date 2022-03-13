class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        queue<int> q;
        int n= board.size();
        int N = n*n;
        vector<bool> visited(N+1);
        vector<int> Distance(N+1,-1);
        q.push(1);
        visited[1]=true;
        Distance[1]=0;
        while(!q.empty()){
            int p = q.front();
            for(int i=1;i<=6 && i<=N-p;i++){
                int v = p+i;
                //if(visited[v])continue;
                int r= (n-1)-(v-1)/n;
                int c = (((v-1)/n & 1)==0) ? (v-1)%n : n-1-(v-1)%n;
                if(board[r][c]!=-1) v= board[r][c];
                if(visited[v])continue;
                q.push(v);
                Distance[v]=Distance[p]+1;
                visited[v]=true; 
            }
            q.pop();
        }
        return Distance[N];
    }
};