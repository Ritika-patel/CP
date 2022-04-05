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
    ll tar; cin>>tar;
    ll num; cin>>num;

    if(tar%2==0 && num%2==0 && num*num<=tar){
        cout<<"YES"<<endl;
    }else if(tar%2!=0 && num%2!=0 && num*num<=tar){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    SPEED;
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}



