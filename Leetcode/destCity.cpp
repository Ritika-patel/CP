class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, int>mpp;
        
        for(int i=0; i<paths.size(); i++){
            for(int j=0; j<2; j++){
                mpp[paths[i][j]]++;
            }
            mpp[paths[i][1]]--;
        }

        for(auto &it: mpp){
            if(it.second==0){
                return it.first;
            }
        }
        return " ";
    }
};
