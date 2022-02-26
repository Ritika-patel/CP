class Solution {
private:
    int minCost(vector<int>&cost, int n, vector<int>&dp) {
	if (n < 0) return 0;
    if(dp[n]!=-1) return dp[n];
	if (n==0 || n==1) return cost[n];
	return dp[n]=cost[n] + min(minCost(cost, n-1, dp), minCost(cost, n-2, dp));
}
public:
    int minCostClimbingStairs(vector<int>& cost) {
	int n = cost.size();
    vector<int>dp(n, -1);
	return min(minCost(cost, n-1, dp), minCost(cost, n-2, dp));
}
};
