#include <bits/stdc++.h>
using namespace std;
int solve(int n, int m, string &str1, string&str2, vector<vector<int>>&dp){
    int take=0, notTake=0;
    if(n==0 || m==0) return 0;
    if(dp[n][m]!=-1) return dp[n][m];
    if(str1[n-1]==str2[m-1]){
        take=1+solve(n-1, m-1, str1, str2, dp);
    }else{
        notTake=max(solve(n, m-1, str1, str2, dp),solve(n-1, m, str1, str2, dp));
    }
    return dp[n][m]=max(take, notTake);
}

int minInsertion(string &str)
{
    string str1=str;
    reverse(str.begin(), str.end());
    string str2=str;  
    int n=str1.size();
    int m=str2.size();
    vector<vector<int>>dp(n+1, vector<int>(m+1));
    for(int i=0; i<=n; i++)
        for(int j=0; j<=m; j++)
            dp[i][j]=-1;
    
    int x=solve(n, m,str1, str2, dp);
    return m-x;
}
