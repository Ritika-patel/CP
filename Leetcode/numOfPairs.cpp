class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int count=0;
        map<pair<int, int>, int>s;
        
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if((nums[i]+nums[j])==target && i!=j){
                    s.insert({{i, j}, 0});
                } 
            }
        }
        
        return s.size();
    }
};
