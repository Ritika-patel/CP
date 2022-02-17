//RECURSIVE SOLUTION
int solve(int n, int m, vector< vector< int> > &mat) {
    int ans1=0, ans2=0;
    if(n==0 && m==0) return 1;
    if(mat[n][m]==-1) return 0;
    if(n>=1)ans1=solve(n-1,m, mat);
    if(m>=1)ans2=solve(n, m-1, mat);
    return ans1+ans2;
}
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    // Write your code here
    solve(n-1, m-1, mat);
}

//MEMOIZATION SOLUTION
int solve(int n, int m, vector<vector<int>>&dp, vector<vector<int>>&mat){
    int up=0, left=0;
    if(mat[n][m]==-1) return 0;
    if(dp[n][m]!=-1) return dp[n][m];
    if(m==0 && n==0) return 1;
    if(m<0 || n<0) return 0;
    if(n>=1)up=solve(n-1, m, dp, mat);
    if(m>=1)left=solve(n, m-1, dp, mat);
    return dp[n][m]=up+left;
}
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
	// Write your code here.
    vector<vector<int>> dp( n , vector<int> (m, -1));
    return solve(n-1, m-1, dp, mat);
}
