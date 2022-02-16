//RECURSIVE
int solve(int m, int n){
    int up=0, left=0;
    if(m==0 && n==0) return 1;
    if(m<0 || n<0) return 0;
    if(m>=1)up=solve(m-1, n);
    if(n>=1)left=solve(m, n-1);
    return up+left;
}
int uniquePaths(int m, int n) {
	// Write your code here.
    return solve(m-1, n-1);
}

//MEMOIZATION
int solve(int m, int n, vector<vector<int>>&dp){
    int up=0, left=0;
    if(dp[m][n]!=-1) return dp[m][n];
    if(m==0 && n==0) return 1;
    if(m<0 || n<0) return 0;
    if(m>=1)up=solve(m-1, n, dp);
    if(n>=1)left=solve(m, n-1, dp);
    return dp[m][n]=up+left;
}
int uniquePaths(int m, int n) {
	// Write your code here.
    vector<vector<int>> dp( m , vector<int> (n, -1));
    return solve(m-1, n-1, dp);
}

//TABULATION
int uniquePaths(int m, int n) {
	// Write your code here.
    int dp[m][n];
  for(int i=0; i<m ;i++){
      for(int j=0; j<n; j++){
          
          //base condition
          if(i==0 && j==0){
              dp[i][j]=1;
              continue;
          }
          
          int up=0;
          int left = 0;
          
          if(i>0) 
            up = dp[i-1][j];
          if(j>0)
            left = dp[i][j-1];
            
          dp[i][j] = up+left;
      }
  }
    return dp[m-1][n-1];
}

//SPACE OPTIMIZATION
