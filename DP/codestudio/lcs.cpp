//RECURTION
int solve(string s, string t, int m, int n){
    if(n==0 || m==0) return 0;
    if(s[m-1]==t[n-1]) return (1+solve(s, t, m-1, n-1));//found
    else return max(solve(s, t, m, n-1), solve(s, t, m-1, n));//not found
}
int lcs(string s, string t)
{
    int m=s.size();//s
    int n=t.size();//t
    return solve(s, t, m, n);
}

//memoization
    int longestCommonSubsequence(string &text1, string &text2,int m,int n,int memo[][1001]) {
        if(m==0 || n==0){
            return 0;
        }
        if(memo[m][n]!=-1){
            return memo[m][n];
        }
        if(text1[m-1]==text2[n-1]){
            return memo[m][n]= 1+longestCommonSubsequence(text1,text2,m-1,n-1,memo);
        }else{
            return memo[m][n]= max(longestCommonSubsequence(text1,text2,m-1,n,memo),longestCommonSubsequence(text1,text2,m,n-1,memo));
        }
    }
    
    int lcs(string text1, string text2) {
        int m=text1.size(),n=text2.size();
        int memo[1001][1001];
        for(int i=0;i<1001;i++){
            for(int j=0;j<1001;j++){
                memo[i][j]=-1;
            }
        }
        return longestCommonSubsequence(text1,text2,m,n,memo);
    }

//TABULATION
    int lcs(string text1, string text2) {
        int m=text1.size(),n=text2.size();
        int memo[m+1][n+1];
        
        for(int i=0; i<m+1; i++){
            memo[i][0]=0;
        }
        
         for(int i=0; i<n+1; i++){
            memo[0][i]=0;
        }
        
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(text1[i-1]==text2[j-1]) memo[i][j]= 1 + memo[i-1][j-1];
                else memo[i][j]=max(memo[i-1][j], memo[i][j-1]);
            }
        }
        
        return memo[m][n];
    }
