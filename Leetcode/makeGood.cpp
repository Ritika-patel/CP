class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
         string ptr="";
        for(int i=0; i<s.length(); i++){
             st.push(s[i]);
            while (!st.empty() && ((st.top()==s[i+1]+32) || (st.top()==s[i+1]-32))){
                st.pop();
                i++;
            }
        }
        
        while(st.size()>0){
            ptr+=st.top();
            st.pop();
        }
        reverse(ptr.begin(), ptr.end());
        
        return ptr;
    }
};
