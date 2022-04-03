#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
#define fr(i, a, b) for (int i = a; i < b; i++)
#define mod 1000000007
#define pb push_back
#include <string>
#define ff first
#define ss second
#define ii pair<int,int>
typedef long long ll;
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define INF 1000000000
#define endl '\n'
using namespace std;
 
bool checkati(int i, int m, vector<vector<int>>&mat){
    for(int j=0; j<m; j++){
        if(mat[i][j]!=0) return false;
    }
    return true;
}
 
 
 
void solve(){
    ll n; cin>>n;
    ll low=1;
    ll high=pow(n, 1.0/3.0);
 
 
    while(low<=high){
        ll sum=pow(low,3)+pow(high,3);
        if(sum==n){
            cout<<"YES"<<endl;
            return;
        }else if(sum>n){
            high--;
        }else{
            low++;
        }
    }
    cout<<"NO"<<endl;
 
}  
 
int32_t main(){
    SPEED;
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
