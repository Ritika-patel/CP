class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int breakpoint=0;
        set<string>s;
        string ans="";
        for(int i=0; i<emails.size(); i++){
            ans.clear();
            for(int j=0; j<emails[i].length(); j++){
                if(emails[i][j]=='@'){
                   breakpoint=j;
                }
            }
            for(int j=0; j<breakpoint; j++){
                if(emails[i][j]!='.' && emails[i][j]!='+'){
                    ans+=emails[i][j];
                }
                if(emails[i][j]=='+'){
                    break;
                }
            }
            
            for(int j=breakpoint; j<emails[i].length(); j++){
                ans+=emails[i][j];
            }
            cout<<ans<<" ";
            s.insert(ans);
        }
        return s.size();
    }
};
