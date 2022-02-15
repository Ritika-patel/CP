//MEMOIZATION SOLUTION
class Solution {
public:
    int solve (int ind, int n, int sum, vector<int>&dp){
        if(ind == 0) return dp[0]=0;
        if(ind==1 || ind==2) return dp[1]=1;
        if(dp[ind]!=-1) return dp[ind];
        if(ind>=3){
         dp[ind]=solve(ind-1, n, sum, dp)+solve(ind-2, n, sum, dp)+solve(ind-3, n, sum, dp);   
        }
        return dp[ind];
    }
    
    int tribonacci(int n) {
        int ind=n;
        int sum=0;
        vector<int>dp(n+1,-1);
        return solve(ind, n, sum, dp);
    }
};

// TABULATION 
class Solution {
public:    
    int tribonacci(int n) {
        int ind=n;
        vector<int>dp(n+3, 0);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        if(n<=2) return dp[n];
        for(int i=3; i<=n; i++){
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n];
    }
};

// SPACE OPTIMIZATION
class Solution {
public:    
    int tribonacci(int n) {
        int ind=n;
        vector<int>dp(n+3, 0);
        dp[0]=0 ,dp[1]=1, dp[2]=1;
        if(n<=2) return dp[n];
        
        int prev1=0, prev2=1, prev3=1;
        
        for(int i=3; i<=n; i++){
            int curi=prev1+prev2+prev3;
            prev1=prev2;
            prev2=prev3;
            prev3=curi;
        }
        return prev3;
    }
};
