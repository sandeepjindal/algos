    int isSafe(vector<vector<char>>& grid, vector<vector<bool>>& visited, int r , int c, int rows,int cols){
        return (r>=0 && r<rows && c>=0 && c<cols && grid[r][c] == '1' && !visited[r][c])?1:0;
    }
    
    void DFS(vector<vector<char>>& grid, vector<vector<bool>>& visited, int r , int c, int rows,int cols){
        visited[r][c] = true;
        
        vector<int> rowsN = {-1,0,1,0};
        vector<int> colsN = {0,-1,0,1};   
        
        for(int k =0;k<4;++k){
            if(isSafe(grid,visited,r+rowsN[k],c+colsN[k], rows,cols)){
                DFS(grid,visited,r+rowsN[k],c+colsN[k],rows,cols);
            }
        }
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = rows ? grid[0].size():0;
        
        int count =0;
        
        vector<vector<bool>> visited(rows,vector<bool>(cols,false));
        
        for(int i=0;i<rows;++i){
            for(int j=0;j<cols;++j){
                if(grid[i][j] == '1' && !visited[i][j]){
                    DFS(grid,visited,i,j, rows,cols);
                    ++count;
                }
            }
        }
            
        return count;
        
    }
