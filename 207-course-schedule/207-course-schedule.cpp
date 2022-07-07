class Solution {
public:
    bool isCyclic(vector<vector<int>>&adj, vector<int>&vis,int curr){
        if(vis[curr]==2)
            return true;
        vis[curr]=2;
        for(int i=0;i<adj[curr].size();++i)
            if(vis[adj[curr][i]]!=1)
                if(isCyclic(adj,vis,adj[curr][i]))
                    return true;
        vis[curr]=1;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prereq) {
        vector<vector<int>>adj(numCourses);
        for(int i=0;i<prereq.size();++i){
            adj[prereq[i][0]].push_back(prereq[i][1]);
        }
        vector<int>vis(numCourses,0);
        for(int i=0;i<numCourses;++i)
            if(vis[i]==0)
                if(isCyclic(adj,vis,i))
                    return false;
        return true;
    }
};