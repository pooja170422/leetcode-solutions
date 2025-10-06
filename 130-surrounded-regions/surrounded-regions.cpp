class Solution {
public:
    void dfs(vector<vector<char>>& board, int m, int n, int row, int col) {
        int drow[4] = {-1, 0, 1, 0};
        int dcol[4] = {0, 1, 0, -1};
        board[row][col] = -1;
        for (int i = 0; i < 4; i++) {
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            if (nrow >= 0 and nrow < m and ncol >= 0 and ncol < n and
                board[nrow][ncol] == 'O') {
                dfs(board, m, n, nrow, ncol);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                    if (board[i][j] == 'O') {
                        dfs(board, m, n, i, j);
                    }
                }
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == -1) {
                    board[i][j] = 'O';
                } else if (board[i][j]) {
                    board[i][j] = 'X';
                }
            }
        }
    }

};
