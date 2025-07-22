class Solution {
public:
    void dfs(int row, int col, int drow[], int dcol[], int inicolor,
             int newcolor, vector<vector<int>>& image,
             vector<vector<int>>& ans) {
        ans[row][col] = newcolor;

        int m = image.size();
        int n = image[0].size();
        for (int i = 0; i < 4; i++) {
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            if (nrow >= 0 and nrow < m and ncol >=0 and ncol < n and
                    image[nrow][ncol] ==inicolor and ans[nrow][ncol] != newcolor) {
                dfs(nrow, ncol, drow, dcol, inicolor, newcolor, image, ans);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {

        int inicolor = image[sr][sc];
        if (inicolor == color) {
            return image;
        }
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};
        vector<vector<int>> ans = image;
        dfs(sr, sc, drow, dcol, inicolor, color, image, ans);
        return ans;
    }
};