class Solution {
public:
    int countWords(vector<string>& word1, vector<string>& word2) {
        map<string, int>mpp1;
        int count=0;
        
        for(int i=0; i<word1.size(); i++) mpp1[word1[i]]++;   
        
        for(int i=0; i<word2.size(); i++){
            if(mpp1.find(word2[i]) != mpp1.end()){
                if(mpp1[word2[i]] < 2) mpp1[word2[i]]--;   
            }
        }
        
        for(auto & it1:mpp1){
            if(it1.second==0) count++;
        }
        
        return count;
    }
};
