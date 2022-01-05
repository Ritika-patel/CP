#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i,n) for (int i = 0; i < n; i++)
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
typedef long long ll;
#define vi vector<ll>
#define vii vector<ii>
#define vvi vector<vi>
#define INF 1000000000
#define endl '\n'
using namespace std;

void solve() {
    ll N; cin >> N;
    fr(i, 2, N+1) {
        if (__gcd(i, N-1) == 1) {
            cout << i << " " << N-1-i << " " << 1 << endl; return;
        }
    }
 
}
int main() {
    int t; cin>>t;
    while(t--){
        solve();
    }
}

