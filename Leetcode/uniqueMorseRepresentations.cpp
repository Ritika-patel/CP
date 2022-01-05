class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>alpha ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string str="";
        set<string>ans;

        
        for(int i=0; i<words.size(); i++){
            for(int j=0; j<words[i].length(); j++){
                str+=alpha[words[i][j]-'a'];
            }
            ans.insert(str);
            str.clear();
        }
        
        return ans.size();
    }
};
