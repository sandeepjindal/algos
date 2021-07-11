class Solution {
public:
    vector<vector<int>> dp;
    
    bool isSafe(vector<vector<int>>& matrix,int i, int j, int prev){
        if(i < 0 || i >=matrix.size() || j< 0 || j >=size(matrix[0]) || matrix[i][j] <= prev){
            return false;
        }
        return true;
    }
    
    int dfs(vector<vector<int>>& matrix ,int i, int j){
        if(dp[i][j]) {
            return dp[i][j];
        }
        dp[i][j] =1;
        
        vector<int> xdiff ={0,1,0,-1};
        vector<int> ydiff ={-1,0,1,0};
        
        for(int k=0;k<4;++k){
            if(isSafe(matrix,i+xdiff[k],j+ydiff[k],matrix[i][j])){
                dp[i][j] = max(dp[i][j],1+ dfs(matrix,i+xdiff[k],j+ydiff[k]));
            }
        }
        return dp[i][j];
    }
    
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = n ? matrix[0].size() : 0;
        dp.resize(n, vector<int>(m));
        int lp=1; 
        for(int i =0;i<n;++i){
            for(int j =0;j<m;++j){
                    lp = max(lp,dfs(matrix,i,j));
            }
        }
        
        return lp;
    }
};
