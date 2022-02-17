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

//TABULATION SOLUTION
int mod=(int)(1e9 + 7);
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    // Write your code here
    int dp[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j]==-1) dp[i][j]=0;
            else if(i==0 && j==0) dp[i][j]=1;
            else{
                int up=0, left=0;
                if(i>0) up=dp[i-1][j];
                if(j>0) left=dp[i][j-1];
                dp[i][j]=(left+up)%mod;
            }
        }
    }
    return dp[n-1][m-1];
}
//SPACE OPTIMIZATION
int mod=(int)(1e9 + 7);
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    // Write your code here
    //array of row size which has m columns
    vector<int>prev(m, 0);
    for(int i=0; i<n; i++){
            vector<int>curi(m, 0);
        for(int j=0; j<m; j++){
            if(mat[i][j]==-1) curi[j]=0;
            else if(i==0 && j==0) curi[j]=1;
            else{
                int up=0, left=0;
                if(i>0) up=prev[j];
                if(j>0) left=curi[j-1];
                curi[j]=(left+up)%mod;
            }
        }
        prev=curi;
    }
    return prev[m-1];
}
