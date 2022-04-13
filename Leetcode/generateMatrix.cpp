class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>mat(n, vector<int>(n));
        int temp=1;
        
        for(int x=0; x<n; x++){
            //upper
            for(int j=x; j<n-x; j++) mat[x][j]=temp, temp++;
            
            //right
            for(int i=x+1; i<n-x; i++) mat[i][n-x-1]=temp, temp++;
            
            //down
            for(int j=n-2-x; j>=x; j--) mat[n-x-1][j]=temp, temp++;
            
            //left
            for(int i=n-x-2; i>=x+1; i--) mat[i][x]=temp, temp++;
        }
        
        return mat;
    }
};
