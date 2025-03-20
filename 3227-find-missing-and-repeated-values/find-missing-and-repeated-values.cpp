class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int a=-1;
        int b=-1;
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mpp[grid[i][j]]++;
            }
        }
        for(int i=1;i<=n*n;i++){
            if(mpp.find(i)==mpp.end()){
                a=i;
            }
            else if(mpp[i]==2){
                b=i;
            }
        }
        return {b,a};
    }
};