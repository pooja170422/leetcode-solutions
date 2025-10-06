class Solution {
public:
    void dfs(vector<vector<int>>& grid,int m,int n,int row,int col){
        grid[row][col]=-1;
        int drow[4]={-1,0,1,0};
        int dcol[4]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=row+drow[i];
            int ncol=col+dcol[i];
            if(nrow>=0 and nrow<m and ncol>=0 and ncol<n and grid[nrow][ncol]==1){
                dfs(grid,m,n,nrow,ncol);
            }


        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || i==m-1 || j==0 || j==n-1){
                    if(grid[i][j]==1){
                        dfs(grid,m,n,i,j);
                    }
                }
            }
        }
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};