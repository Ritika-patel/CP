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
    ll x; cin>>x;
    ll sum=0;
    ll breakpoint=0;
    ll mini=INT_MAX;
    vector<ll>a(n);
    vector<ll>b;
    for(auto&it: a)cin>>it;
    b=a;
 
    for(ll i=0; i<a.size(); i++){
        ll count=0;
        while(a[i]%x == 0){
            a[i]=a[i]/x;
            count++;
        }
        mini=min(count, mini);
    }
ll p=0;
 for(ll i=0; i<b.size(); i++){
    p=0;
    while(p<mini+1){
        sum+=pow(x, p)*b[i];
        p++;
        if(p>=mini+1)break;
        b[i]=b[i]/x;
    }
 }
 
 for(ll i=0; i<n; i++){
    if(b[i]%x==0){
        sum+=pow(x, mini)*b[i];
    }else{
        break;
    }
 }
 
 cout<<sum<<endl;
}
 
 
int main(){
    ll t; cin>>t;
    while(t--){
        solve();
    }
}
