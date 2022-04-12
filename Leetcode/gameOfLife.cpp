class Solution {
public:
    void gameOfLife(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
        vector<vector<int>>ans(n, vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int live=0;
                if(i-1>=0){//up;
                    if(a[i-1][j]==1) live++;
                }//down
                if(i+1 < n){
                    if(a[i+1][j]==1) live++;
                }//left
                if(j+1 <m){
                    if(a[i][j+1]==1) live++;
                }//right
                if(j-1>=0){
                    if(a[i][j-1]==1) live++;
                }// left-up digonal
                if(i-1>=0 && j-1>=0){
                    if(a[i-1][j-1]==1) live++;
                }//left down digonal
                if(i+1<n && j-1>=0){
                    if(a[i+1][j-1]==1) live++;
                }//right-up digonal
                if(i-1>=0 && j+1<m){
                    if(a[i-1][j+1]==1) live++;
                }//right-down digonal
                if(i+1<n && j+1<m){
                    if(a[i+1][j+1]==1) live++;
                }
                
                //making change in ans matrix
                if(a[i][j]==1){//live matrix
                    if(live<2) ans[i][j]=0;
                    else if(live==2 || live==3) ans[i][j]=1;
                    else ans[i][j]=0;
                }else{//dead matrix
                    if(live==3)ans[i][j]=1;
                    else ans[i][j]=0;
                }
            }
        }        
        a=ans;

    }
};
