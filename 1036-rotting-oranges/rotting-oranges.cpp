class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int cntfresh = 0;
        queue<pair<pair<int, int>, int>> q;
        vector<vector<int>> vis(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 1;
                }
                if (grid[i][j] == 1) {
                    cntfresh++;
                }
            }
        }
        int drow[4] = {-1, 0, 1, 0};
        int dcol[4] = {0, 1, 0, -1};
        int tm = 0;
        while (!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            q.pop();
            tm = max(tm, t);
            for (int i = 0; i < 4; i++) {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if (nrow >= 0 and nrow < m and ncol >= 0 and ncol < n and
                    grid[nrow][ncol] == 1 and vis[nrow][ncol] == 0) {
                    q.push({{nrow, ncol}, t + 1});
                    vis[nrow][ncol] = 1;
                    cntfresh--;
                }
            }
        }
        if (cntfresh == 0) {
            return tm;
        } else {
            return -1;
        }
    }
};