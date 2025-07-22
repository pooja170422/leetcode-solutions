class Solution {
public:
    void dfs(int row,int col,int drow[],int dcol[],vector<vector<int>>& grid,int m,int n){
        grid[row][col]='#';
        for(int i=0;i<4;i++){
            int nrow=row+drow[i];
            int ncol=col+dcol[i];
            if(nrow>=0 and nrow<m and ncol>=0 and ncol<n and grid[nrow][ncol]==1){
                dfs(nrow,ncol,drow,dcol,grid,m,n);
            }
        }

    }

    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0 ||i==m-1 || j==n-1){
                    if(grid[i][j]==1){
                        dfs(i,j,drow,dcol,grid,m,n);
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