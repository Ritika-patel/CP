class Solution {
public:
    int FindRow(vector<vector<int>>& matrix, int target){
        int low=0;
        int x=matrix[0].size();
        int high=matrix.size()-1;
        while(low<=high){
            int mid=high-(high-low)/2;
            
            if(matrix[mid][0]<=target && matrix[mid][x-1]>=target) return mid;
            if(matrix[mid][0]>target) high=mid-1;
            if(matrix[mid][x-1]<target) low=mid+1;
        }
        return 0;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ind=FindRow(matrix, target);
        int low=0;
        int high=matrix[0].size()-1;
        
        while(low<=high){
            int mid=high-(high-low)/2;
            if(matrix[ind][mid]==target) return true;
            else if(matrix[ind][mid]<target) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};
