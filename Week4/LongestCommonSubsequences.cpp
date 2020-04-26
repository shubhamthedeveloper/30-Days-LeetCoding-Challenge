class Solution {
public:
  
    int longestCommonSubsequence(string text1, string text2) {
       if(text1[0] == NULL || text2[0] == NULL)
            return 0;
        
        int n = text1.length();
         int m = text2.length();
        
        vector<vector<int>> res(n+1,vector<int>(m+1,0));
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(text1[i-1] == text2[j-1]){
                    res[i][j] = 1+ res[i-1][j-1];
            }else{
                res[i][j] = max(res[i-1][j],res[i][j-1]);
            }
        }
        }
        return res[n][m];
    }
};