class Solution {
public:

    bool dfs(int node,int col,vector<int>&vis,vector<vector<int>>& adj){
        vis[node]=col;
        for(auto it:adj[node]){
            if(vis[it]==-1){
                if(dfs(it,!col,vis,adj) ==false)return false;
            }
            else if(vis[it]==col){
               return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& adj) {
        int n=adj.size();
        vector<int>vis(n,-1);
        for(int i=0;i<n;i++){
            if(vis[i]==-1){
                if(dfs(i,0,vis,adj)==false){
                    return false;
                } 
            }
        }
        return true;
    }
};