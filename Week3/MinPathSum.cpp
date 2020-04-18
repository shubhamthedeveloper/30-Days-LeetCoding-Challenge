class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size() == 0)
            return 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> res(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res[i][j] = grid[i][j];
                if(i>0 && j>0){
                    res[i][j] += min(res[i-1][j],res[i][j-1]);
                }else if(i>0){
                    res[i][j] += res[i-1][j];
                }else if(j>0){
                    res[i][j] += res[i][j-1];
                }
                
            }
        }
        return res[n-1][m-1];;
    }
};