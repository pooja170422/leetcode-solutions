class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(auto it:guards){
            vis[it[0]][it[1]]=1;
        }
        for(auto it:walls){
            vis[it[0]][it[1]]=2;
        }
        int drow[4]={-1,0,1,0};
        int dcol[4]={0,1,0,-1};

        for (auto g: guards) {
            for (int d = 0; d < 4; ++d) {
                int r = g[0] + drow[d];
                int c = g[1] + dcol[d];
                while (r >= 0 && r < m && c >= 0 && c < n) {
                    if (vis[r][c] == 1 || vis[r][c] == 2) break; // wall/guard blocks
                    if (vis[r][c] == 0) vis[r][c] = 3; // mark guarded
                    r += drow[d];
                    c += dcol[d];
                }
            }
        }
        int unguarded = 0;
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                if (vis[i][j] == 0)
                    unguarded++;

        return unguarded;

        
    }
};