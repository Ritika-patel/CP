
int solve(int joy1, int joy2, vector<vector<int>>&dp){
    int take=0;
    int notTake=0;
    if(joy1<=0 || joy2<=0) return 0;
    if(dp[joy1][joy2]!=-1) return dp[joy1][joy2];

    if(joy2-2>=0)take=1+solve(joy1+1, joy2-2, dp);
    if(joy1-2>=0)notTake=1+solve(joy1-2, joy2+1, dp);

    return dp[joy1][joy2]=max(take, notTake);
}

int main(){
    int joy1; cin>>joy1;
    int joy2; cin>>joy2;

    vector<vector<int>>dp(1000, vector<int>(1000, -1));
    cout<<solve(joy1, joy2, dp);
}

