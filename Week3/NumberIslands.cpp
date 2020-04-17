class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        const int n = grid.size();
        const int m = n>0? grid[0].size(): 0;
        if(n == 0) return 0;
        
        int islands =0;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(grid[i][j] == '1')
                islands += dfs(grid,i,j,n,m);
            }
        }
        return islands;
    }
    
    int dfs(vector<vector<char>>& grid,int i, int j,int n,int m){
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j] == '0')
            return 0;
        grid[i][j] = '0';
        dfs(grid,i-1,j,n,m);
        dfs(grid,i+1,j,n,m);
        dfs(grid,i,j-1,n,m);
        dfs(grid,i,j+1,n,m);
        return 1;
    }
};