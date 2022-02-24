bool ispelindrome(string str, int i, int j){
    while(i<j){
        if(str[i]!=str[j]){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}

int fun(string str, int i, int j){
    if(i>=j) return 0;
    if(ispelindrome(str, i, j)) return 0;
    int mini=INT_MAX;
    int temp=0;
    for(int k=i; k<=j-1; k++){
        temp=fun(str, i, k)+fun(str, k+1, j)+1;
        mini=min(mini, temp);
    }
    return mini;
}

void solve(){
    string str; cin>>str;
    cout<<fun(str, 0, str.size()-1);
}

int main(){
    solve();
}
