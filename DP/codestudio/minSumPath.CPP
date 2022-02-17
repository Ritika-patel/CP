//
int solve(int i, int j, vector<vector<int>> &grid){
    int up=0, left=0;
    if(i<0 || j<0) return 1e9;
    if(i==0 && j==0) return grid[i][j];
    
    up=grid[i][j]+solve(i-1, j, grid);
    left=grid[i][j]+solve(i, j-1, grid);
    
    return min(up, left);
}
int minSumPath(vector<vector<int>> &grid) {
    int n=grid.size();
    int m=grid[0].size();
    return solve(n-1, m-1, grid);
}
