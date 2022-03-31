class Solution {
public:
    bool solve(int i, vector<int>&nums, int tar, vector<vector<int>>&dp){
        int take=0, notTake=0;
        if(i==0){
            if(tar==0) return true;
            else return false;
        }
        if(i<0) return false;
        if(tar<0) return false;
        
        if(dp[i][tar]!=-1) return dp[i][tar];
        
        take=solve(i-1, nums, tar-nums[i], dp);
        notTake=solve(i-1, nums, tar, dp);
        return dp[i][tar]=(take|| notTake);
    }
    
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return false;
        int tar=sum/2;
        vector<vector<int>>dp(n, vector<int>(tar+1, -1));
        return solve(nums.size()-1, nums, tar, dp);

    }
};
