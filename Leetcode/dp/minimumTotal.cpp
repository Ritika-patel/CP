class Solution {
public:
   int minTotalUtil(vector<vector<int>>& triangle, int h, int j, vector<vector<int>>& dp) {
        int one=0, two=0;
       if(h == triangle.size()) return 0;
       if(j>=triangle[h].size()) return 1e4;
       if(dp[j][h]!=-1) return dp[j][h];
       one=triangle[h][j]+minTotalUtil(triangle, h+1, j, dp);
       two=triangle[h][j]+minTotalUtil(triangle, h+1, j+1, dp);
        return dp[j][h]=min(one, two);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
          vector<vector<int>>dp(n, vector<int>(n, -1));
          return minTotalUtil(triangle, 0, 0, dp);
    }
};
