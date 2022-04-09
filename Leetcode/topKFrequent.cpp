class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>mpp;
        int n=nums.size();
        vector<vector<int>>vec;
        vector<int>ans;
        
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        
        for(auto it: mpp){
            vec.push_back({it. second, it.first});
        }
        
        sort(vec.begin(), vec.end(), greater<vector<int>>());
        
        for(int i=0; i<k; i++){
            ans.push_back(vec[i][1]);
        }
        return ans;
    }
};
