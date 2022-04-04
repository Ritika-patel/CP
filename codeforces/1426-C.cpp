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

void solve(){
    ll n; cin>>n;
    ll x=floor(sqrt(n));
    ll ans=INT_MAX;

    for(ll i=1; i<=x+1; i++){
        ll k=(i-1)+((n-1)/i);
        ans=min(ans, k);
    }

    cout<<ans<<endl;
}  

int main(){
    SPEED;
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}


