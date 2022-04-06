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

bool isPrime(ll x){
    for(ll i=2; i*i<=(x); i++){
        if(x%i==0) return false;
    }
    return true;
}

void solve(){
    ll a; cin>>a;
    ll b; cin>>b;

    if( (isPrime(a+b)==true) && ((a-b) == 1)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}

