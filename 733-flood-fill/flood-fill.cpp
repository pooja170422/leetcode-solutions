class Solution {
public:
    void dfs(vector<vector<int>>& image,int drow[],int dcol[], int color,int inicol, int row, int col,int m,int n){
        image[row][col]=color;
        for(int i=0;i<4;i++){
            int nrow=row+drow[i];
            int ncol=col+dcol[i];
            if(nrow>=0 and nrow<m and ncol>=0 and ncol<n and image[nrow][ncol]==inicol ){
                dfs(image,drow,dcol,color,inicol,nrow,ncol,m,n);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)   {
        int m=image.size();
        int n=image[0].size();
        if(image[sr][sc]==color){
            return image;
        }
      
        int inicol=image[sr][sc];
        int drow[4]={-1,0,1,0};
        int dcol[4]={0,1,0,-1};
        dfs(image,drow,dcol,color,inicol,sr,sc,m,n);
        return image;


        
    }
};