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
