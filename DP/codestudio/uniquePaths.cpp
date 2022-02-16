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
