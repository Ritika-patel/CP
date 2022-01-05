class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int>mpp;
        
        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++; 
        }
        
        int cnt= mpp[s[0]];
        for(auto it : mpp){
            if(cnt!=it.second)
                return false;
        }
        
        return true;
    }
};
