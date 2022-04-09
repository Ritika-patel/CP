class Solution {
public:
    vector<string> printVertically(string s) {
        int n=s.size();
        vector<string>vec;
        string ans="";
        int maxi=-1;
        
        for(int i=0; i<n; i++){
            if(s[i]!=' '){
                ans+=s[i];
            }else{
                vec.push_back(ans);
                maxi=max(maxi, (int)ans.size());
                ans="";
            }
            if(i==n-1){
                vec.push_back(ans);
                maxi=max(maxi, (int)ans.size());
            }
        }
        
        for(int i=0; i<vec.size(); i++){
            if(vec[i].size()<maxi){
                int abc=maxi;
                int x=maxi-vec[i].size();
                while(x--){
                    vec[i]+=" ";
                }
            }
        }
        
        vector<string>nums;
        string str="";
        int j=0;
        while(j<maxi){
            for(int i=0; i<vec.size(); i++){
                str+=vec[i][j];
            }
            while(str[str.size()-1]==' '){
                str.pop_back();
                if(str[str.size()-1]!=' ') break;
            }
            nums.push_back(str);
            str="";
            j++;
        }
        
        
        return nums;
    }
};
