class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        // do a bfs
        vector<bool> visited(n, false);
        vector<vector<int>> adjList(n, vector<int>());
        
        for(vector<int> & edge: edges)
        {
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]);
        }
        
        queue<int> Q;
        Q.push(source);
        visited[source] = true;
        
        while(Q.size())
        {
            int node = Q.front(); Q.pop();
            
            if(node == destination)
                return true;
            
            for(int neighbor: adjList[node])
            {
                if(visited[neighbor] == false)
                {
                    visited[neighbor] = true;
                    Q.push(neighbor);
                }
            }
        }
        
        return visited[destination];
    }
};