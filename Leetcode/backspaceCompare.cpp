class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>stk;
        stack<char>ptk;
        
        for(int i=0; i<s.size(); i++){
             if(s[i]!='#') stk.push(s[i]);
             if(s[i]=='#' && stk.size()>0)  stk.pop();
        }
        
        for(int i=0; i<t.size(); i++){
             if(t[i]!='#') ptk.push(t[i]);
             if(t[i]=='#' && ptk.size()>0)  ptk.pop();
        }
        
        if(stk==ptk) return true;
        return false;
        
    }
};
