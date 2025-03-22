class Solution {
public:
    void dfs(int node, vector<int>& vis, vector<vector<int>>& adj,
             vector<int>& temp) {
        vis[node] = 1;
        temp.push_back(node);
        for (auto it : adj[node]) {
            if (vis[it] == -1) {
                dfs(it, vis, adj, temp);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<int> vis(n, -1);
        vector<int> temp;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (vis[i] == -1) {
                temp.clear();
                int actualEdges = 0;

                dfs(i, vis, adj, temp);
                int verticesCnt = temp.size();
                int expectedEdges = (verticesCnt * (verticesCnt - 1)) / 2;
                for (int node : temp) {
                    actualEdges += adj[node].size();
                }
                actualEdges = actualEdges / 2;
                if (actualEdges == expectedEdges) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};