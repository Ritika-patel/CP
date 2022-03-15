int solve(int *arr, int key, int n){
    int x=upper_bound(arr, arr+n, key)-arr;
    return x;
}

int main(){
    int n; cin>>n; // no shops
    int prices[n];//price in ith shop

    for(int i=0; i<n; i++){
        cin>>prices[i];
    }
    sort(prices, prices+n);

    int q; cin>>q;// no of days he plan to buy
    while(q--){
        int coins; cin>>coins;
        cout<<solve(prices, coins, n)<<endl;
    }
}
