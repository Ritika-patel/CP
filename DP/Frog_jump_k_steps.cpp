//RECURSIVE SOLUTION
int solve(int ind, int n, vector<int>&arr) {
    if(ind==0) return 0;
    int mini=INT_MAX;
    for(int i=1; i<=n; i++){
        if(ind-i >= 0){
        int x = solve(ind-i, n, arr)+abs(arr[ind]-arr[ind-i]);
        mini=min(mini, x);
        }
    }
    return mini;
}

int main() {
    int n; cin>>n; 
    vector<int>arr;
    for(int i=0; i<n; i++){
        int temp; cin>>temp;
        arr.push_back(temp);
    }
    int ind=n-1;
    cout<<solve(ind, n, arr);
    return 0;
}

//MEMOIZATION SOLUTION
//T.C=o(n)*n;
//S.C=O(n)+o(n)

int solve(int ind, int n, vector<int>&arr, vector<int>&ds) {
    if(ind==0) return 0;
    if(ds[ind]!=-1) return ds[ind];
    int mini=INT_MAX;
    for(int i=1; i<=n; i++){
        if(ind-i >= 0){
        int x = solve(ind-i, n, arr, ds)+abs(arr[ind]-arr[ind-i]);
        mini=min(mini, x);
        }
    }
    return mini;
}

int main() {
    int n; cin>>n; 
    vector<int>arr;
    for(int i=0; i<n; i++){
        int temp; cin>>temp;
        arr.push_back(temp);
    }

    vector<int>ds(n+1, -1);
    int ind=n-1;
    cout<<solve(ind, n, arr, ds);
    return 0;
}

//TABULATION
//T.C=O(n)*n;
//S.C=O(n)+O(n)

int main() {
    int n; cin>>n; 
    vector<int>a;
    for(int i=0; i<n; i++){
        int temp; cin>>temp;
        a.push_back(temp);
    }

    vector<int>dp(n, -1);
    
    dp[0]=0;
    int jump=0;
    int mini=INT_MAX;

    for(int i=1; i<n; i++){
        mini=INT_MAX;
        for(int j=1; j<=n; j++){
            if(i-j >= 0){
                jump=dp[i-j]+abs(a[i]-a[i-j]);
                mini=min(mini, jump);
            }
            dp[j]=mini;
        }
    }
    cout<<dp[n-1];
    return 0;
}

