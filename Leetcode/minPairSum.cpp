class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int maxi=0;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n/2; i++){
            int sum=nums[i]+nums[n-1-i];          
            maxi=max(maxi, sum);
        }
        return maxi;
    }
};