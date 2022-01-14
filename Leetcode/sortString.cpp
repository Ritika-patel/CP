class Solution {
public:
    string sortString(string s) {
        map<char, int>mpp;
        string ans="";
        for(int i=0; i<s.length(); i++){
            mpp[s[i]]++;
        }
        
        map<char, int>::iterator itr;
        map<char, int>::reverse_iterator it;
        
        while(s.size() != ans.size()){
            for(itr = mpp.begin(); itr != mpp.end(); ++itr){
                if(itr->second>0){
                    ans+=itr->first;
                }
                itr->second--;
            }
            
            for (it = mpp.rbegin(); it != mpp.rend(); it++){
                if(it->second>0){
                    ans+=it->first;
                }
                it->second--;
            }
        }
        return ans;
    }
};
