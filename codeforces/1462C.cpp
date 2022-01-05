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
    int n; cin>>n;
    vector<int>vec;
    ll i=9;
    ll num=0;

    if(n>45){
        cout<<-1<<endl;
        return;
    }


        while(n>=10 && i>0){
            n=n-i;
            vec.push_back(i);
            i--;
        }

        while(n>i && i>0){
            n=n-i;
            vec.push_back(i);
            i--;
        }
        vec.push_back(n);

        sort(vec.begin(), vec.end());

        for(int i=0; i<vec.size(); i++){
            cout<<vec[i];
        }cout<<endl;
}
int main() {
    int t; cin>>t;
    while(t--){
        solve();
    }
}

