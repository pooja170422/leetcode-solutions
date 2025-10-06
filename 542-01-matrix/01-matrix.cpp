class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> vis(m, vector<int>(n, 0));
        vector<vector<int>> dis(m, vector<int>(n, 0));
        queue<pair<pair<int, int>, int>> q;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 1;
                }
            }
        }
        int drow[4] = {-1, 0, 1, 0};
        int dcol[4] = {0, 1, 0, -1};
        while (!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int d = q.front().second;
            q.pop();
            dis[row][col] = d;
            for (int i = 0; i < 4; i++) {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if (nrow >= 0 and nrow < m and ncol >= 0 and ncol < n and
                    mat[nrow][ncol] == 1 and vis[nrow][ncol] == 0) {
                    q.push({{nrow, ncol}, d + 1});
                    vis[nrow][ncol] = 1;
                }
            }
        }
        return dis;
    }
};