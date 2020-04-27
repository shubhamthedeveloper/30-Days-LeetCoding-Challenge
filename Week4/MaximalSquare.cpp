class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        if(!n) return 0;
        int m = matrix[0].size();
        if(!m) return 0;
        vector<vector<int>> dp(n,vector<int>(m,0));
        int maxlen=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0){
                    if(matrix[i][j] == '1'){
                        dp[i][j] =1;
                        maxlen = max(maxlen,dp[i][j]);
                    }
                }else{
                    if(matrix[i][j] == '1'){
                    dp[i][j] = 1+ min(min(dp[i][j - 1], dp[i - 1][j]), 
                                   dp[i-1][j-1]);
                    maxlen = max(maxlen,dp[i][j]);         
                    }
                }
            }
        }
        return maxlen*maxlen;
    }
};