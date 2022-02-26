class Solution {
public:
    int solve(int eggs, int f, vector<int>&dp){
        if(f==0 || f==1) return f;
        if(eggs==1) return f;
        if(dp[f]!=-1) return dp[f];
        int mn=INT_MAX;
        for(int k=1; k<=f; k++){
            int temp=1+max(solve(eggs-1,k-1, dp),solve(eggs,f-k, dp));
            mn=min(mn, temp);
        }
        return dp[f]=mn;
    }
public:
    int twoEggDrop(int n) {
        vector<int>dp(n+1, -1);
        int f=n;
        int eggs=2;
        return solve(eggs, f, dp);
    }
};
